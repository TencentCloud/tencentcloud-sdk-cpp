/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/ocr/v20181119/model/AuditMaterialAgentResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

AuditMaterialAgentResponse::AuditMaterialAgentResponse() :
    m_storeLabelHasBeenSet(false),
    m_sceneTypeHasBeenSet(false),
    m_storeInfoHasBeenSet(false),
    m_angleHasBeenSet(false),
    m_tamperHasBeenSet(false),
    m_synthesisHasBeenSet(false),
    m_remakeScreenHasBeenSet(false),
    m_screenshotHasBeenSet(false),
    m_textWatermarkHasBeenSet(false),
    m_watermarkContentHasBeenSet(false),
    m_templateHasBeenSet(false)
{
}

CoreInternalOutcome AuditMaterialAgentResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("StoreLabel") && !rsp["StoreLabel"].IsNull())
    {
        if (!rsp["StoreLabel"].IsArray())
            return CoreInternalOutcome(Core::Error("response `StoreLabel` is not array type"));

        const rapidjson::Value &tmpValue = rsp["StoreLabel"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_storeLabel.push_back((*itr).GetString());
        }
        m_storeLabelHasBeenSet = true;
    }

    if (rsp.HasMember("SceneType") && !rsp["SceneType"].IsNull())
    {
        if (!rsp["SceneType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SceneType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sceneType = string(rsp["SceneType"].GetString());
        m_sceneTypeHasBeenSet = true;
    }

    if (rsp.HasMember("StoreInfo") && !rsp["StoreInfo"].IsNull())
    {
        if (!rsp["StoreInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `StoreInfo` is not array type"));

        const rapidjson::Value &tmpValue = rsp["StoreInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            StoreInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_storeInfo.push_back(item);
        }
        m_storeInfoHasBeenSet = true;
    }

    if (rsp.HasMember("Angle") && !rsp["Angle"].IsNull())
    {
        if (!rsp["Angle"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Angle` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_angle = rsp["Angle"].GetDouble();
        m_angleHasBeenSet = true;
    }

    if (rsp.HasMember("Tamper") && !rsp["Tamper"].IsNull())
    {
        if (!rsp["Tamper"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Tamper` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tamper.Deserialize(rsp["Tamper"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tamperHasBeenSet = true;
    }

    if (rsp.HasMember("Synthesis") && !rsp["Synthesis"].IsNull())
    {
        if (!rsp["Synthesis"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Synthesis` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_synthesis.Deserialize(rsp["Synthesis"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_synthesisHasBeenSet = true;
    }

    if (rsp.HasMember("RemakeScreen") && !rsp["RemakeScreen"].IsNull())
    {
        if (!rsp["RemakeScreen"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RemakeScreen` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_remakeScreen.Deserialize(rsp["RemakeScreen"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_remakeScreenHasBeenSet = true;
    }

    if (rsp.HasMember("Screenshot") && !rsp["Screenshot"].IsNull())
    {
        if (!rsp["Screenshot"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Screenshot` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_screenshot.Deserialize(rsp["Screenshot"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_screenshotHasBeenSet = true;
    }

    if (rsp.HasMember("TextWatermark") && !rsp["TextWatermark"].IsNull())
    {
        if (!rsp["TextWatermark"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TextWatermark` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_textWatermark.Deserialize(rsp["TextWatermark"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_textWatermarkHasBeenSet = true;
    }

    if (rsp.HasMember("WatermarkContent") && !rsp["WatermarkContent"].IsNull())
    {
        if (!rsp["WatermarkContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WatermarkContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_watermarkContent = string(rsp["WatermarkContent"].GetString());
        m_watermarkContentHasBeenSet = true;
    }

    if (rsp.HasMember("Template") && !rsp["Template"].IsNull())
    {
        if (!rsp["Template"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Template` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_template.Deserialize(rsp["Template"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_templateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string AuditMaterialAgentResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_storeLabelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StoreLabel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_storeLabel.begin(); itr != m_storeLabel.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_sceneTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SceneType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sceneType.c_str(), allocator).Move(), allocator);
    }

    if (m_storeInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StoreInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_storeInfo.begin(); itr != m_storeInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_angleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Angle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_angle, allocator);
    }

    if (m_tamperHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tamper";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tamper.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_synthesisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Synthesis";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_synthesis.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_remakeScreenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemakeScreen";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_remakeScreen.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_screenshotHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Screenshot";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_screenshot.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_textWatermarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TextWatermark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_textWatermark.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_watermarkContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WatermarkContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_watermarkContent.c_str(), allocator).Move(), allocator);
    }

    if (m_templateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Template";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_template.ToJsonObject(value[key.c_str()], allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);

    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


vector<string> AuditMaterialAgentResponse::GetStoreLabel() const
{
    return m_storeLabel;
}

bool AuditMaterialAgentResponse::StoreLabelHasBeenSet() const
{
    return m_storeLabelHasBeenSet;
}

string AuditMaterialAgentResponse::GetSceneType() const
{
    return m_sceneType;
}

bool AuditMaterialAgentResponse::SceneTypeHasBeenSet() const
{
    return m_sceneTypeHasBeenSet;
}

vector<StoreInfo> AuditMaterialAgentResponse::GetStoreInfo() const
{
    return m_storeInfo;
}

bool AuditMaterialAgentResponse::StoreInfoHasBeenSet() const
{
    return m_storeInfoHasBeenSet;
}

double AuditMaterialAgentResponse::GetAngle() const
{
    return m_angle;
}

bool AuditMaterialAgentResponse::AngleHasBeenSet() const
{
    return m_angleHasBeenSet;
}

SceneWarnInfo AuditMaterialAgentResponse::GetTamper() const
{
    return m_tamper;
}

bool AuditMaterialAgentResponse::TamperHasBeenSet() const
{
    return m_tamperHasBeenSet;
}

SceneWarnInfo AuditMaterialAgentResponse::GetSynthesis() const
{
    return m_synthesis;
}

bool AuditMaterialAgentResponse::SynthesisHasBeenSet() const
{
    return m_synthesisHasBeenSet;
}

SceneWarnInfo AuditMaterialAgentResponse::GetRemakeScreen() const
{
    return m_remakeScreen;
}

bool AuditMaterialAgentResponse::RemakeScreenHasBeenSet() const
{
    return m_remakeScreenHasBeenSet;
}

SceneWarnInfo AuditMaterialAgentResponse::GetScreenshot() const
{
    return m_screenshot;
}

bool AuditMaterialAgentResponse::ScreenshotHasBeenSet() const
{
    return m_screenshotHasBeenSet;
}

SceneWarnInfo AuditMaterialAgentResponse::GetTextWatermark() const
{
    return m_textWatermark;
}

bool AuditMaterialAgentResponse::TextWatermarkHasBeenSet() const
{
    return m_textWatermarkHasBeenSet;
}

string AuditMaterialAgentResponse::GetWatermarkContent() const
{
    return m_watermarkContent;
}

bool AuditMaterialAgentResponse::WatermarkContentHasBeenSet() const
{
    return m_watermarkContentHasBeenSet;
}

SceneWarnInfo AuditMaterialAgentResponse::GetTemplate() const
{
    return m_template;
}

bool AuditMaterialAgentResponse::TemplateHasBeenSet() const
{
    return m_templateHasBeenSet;
}


