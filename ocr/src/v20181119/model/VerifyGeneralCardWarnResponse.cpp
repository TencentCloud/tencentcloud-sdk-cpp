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

#include <tencentcloud/ocr/v20181119/model/VerifyGeneralCardWarnResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

VerifyGeneralCardWarnResponse::VerifyGeneralCardWarnResponse() :
    m_tamperHasBeenSet(false),
    m_synthesisHasBeenSet(false),
    m_templateHasBeenSet(false),
    m_remakeScreenHasBeenSet(false),
    m_screenshotHasBeenSet(false),
    m_blurHasBeenSet(false),
    m_borderIncompleteHasBeenSet(false),
    m_copyHasBeenSet(false),
    m_reflectionHasBeenSet(false),
    m_coverHasBeenSet(false),
    m_overlapHasBeenSet(false),
    m_electronHasBeenSet(false),
    m_textWatermarkHasBeenSet(false),
    m_watermarkContentHasBeenSet(false)
{
}

CoreInternalOutcome VerifyGeneralCardWarnResponse::Deserialize(const string &payload)
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

    if (rsp.HasMember("Blur") && !rsp["Blur"].IsNull())
    {
        if (!rsp["Blur"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Blur` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_blur.Deserialize(rsp["Blur"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_blurHasBeenSet = true;
    }

    if (rsp.HasMember("BorderIncomplete") && !rsp["BorderIncomplete"].IsNull())
    {
        if (!rsp["BorderIncomplete"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BorderIncomplete` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_borderIncomplete.Deserialize(rsp["BorderIncomplete"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_borderIncompleteHasBeenSet = true;
    }

    if (rsp.HasMember("Copy") && !rsp["Copy"].IsNull())
    {
        if (!rsp["Copy"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Copy` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_copy.Deserialize(rsp["Copy"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_copyHasBeenSet = true;
    }

    if (rsp.HasMember("Reflection") && !rsp["Reflection"].IsNull())
    {
        if (!rsp["Reflection"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Reflection` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_reflection.Deserialize(rsp["Reflection"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_reflectionHasBeenSet = true;
    }

    if (rsp.HasMember("Cover") && !rsp["Cover"].IsNull())
    {
        if (!rsp["Cover"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Cover` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cover.Deserialize(rsp["Cover"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_coverHasBeenSet = true;
    }

    if (rsp.HasMember("Overlap") && !rsp["Overlap"].IsNull())
    {
        if (!rsp["Overlap"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Overlap` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_overlap.Deserialize(rsp["Overlap"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_overlapHasBeenSet = true;
    }

    if (rsp.HasMember("Electron") && !rsp["Electron"].IsNull())
    {
        if (!rsp["Electron"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Electron` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_electron.Deserialize(rsp["Electron"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_electronHasBeenSet = true;
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


    return CoreInternalOutcome(true);
}

string VerifyGeneralCardWarnResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

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

    if (m_templateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Template";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_template.ToJsonObject(value[key.c_str()], allocator);
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

    if (m_blurHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Blur";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_blur.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_borderIncompleteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BorderIncomplete";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_borderIncomplete.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_copyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Copy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_copy.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_reflectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reflection";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_reflection.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_coverHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cover";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cover.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_overlapHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Overlap";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_overlap.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_electronHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Electron";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_electron.ToJsonObject(value[key.c_str()], allocator);
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

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);

    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


GeneralCardWarnInfo VerifyGeneralCardWarnResponse::GetTamper() const
{
    return m_tamper;
}

bool VerifyGeneralCardWarnResponse::TamperHasBeenSet() const
{
    return m_tamperHasBeenSet;
}

GeneralCardWarnInfo VerifyGeneralCardWarnResponse::GetSynthesis() const
{
    return m_synthesis;
}

bool VerifyGeneralCardWarnResponse::SynthesisHasBeenSet() const
{
    return m_synthesisHasBeenSet;
}

GeneralCardWarnInfo VerifyGeneralCardWarnResponse::GetTemplate() const
{
    return m_template;
}

bool VerifyGeneralCardWarnResponse::TemplateHasBeenSet() const
{
    return m_templateHasBeenSet;
}

GeneralCardWarnInfo VerifyGeneralCardWarnResponse::GetRemakeScreen() const
{
    return m_remakeScreen;
}

bool VerifyGeneralCardWarnResponse::RemakeScreenHasBeenSet() const
{
    return m_remakeScreenHasBeenSet;
}

GeneralCardWarnInfo VerifyGeneralCardWarnResponse::GetScreenshot() const
{
    return m_screenshot;
}

bool VerifyGeneralCardWarnResponse::ScreenshotHasBeenSet() const
{
    return m_screenshotHasBeenSet;
}

GeneralCardWarnInfo VerifyGeneralCardWarnResponse::GetBlur() const
{
    return m_blur;
}

bool VerifyGeneralCardWarnResponse::BlurHasBeenSet() const
{
    return m_blurHasBeenSet;
}

GeneralCardWarnInfo VerifyGeneralCardWarnResponse::GetBorderIncomplete() const
{
    return m_borderIncomplete;
}

bool VerifyGeneralCardWarnResponse::BorderIncompleteHasBeenSet() const
{
    return m_borderIncompleteHasBeenSet;
}

GeneralCardWarnInfo VerifyGeneralCardWarnResponse::GetCopy() const
{
    return m_copy;
}

bool VerifyGeneralCardWarnResponse::CopyHasBeenSet() const
{
    return m_copyHasBeenSet;
}

GeneralCardWarnInfo VerifyGeneralCardWarnResponse::GetReflection() const
{
    return m_reflection;
}

bool VerifyGeneralCardWarnResponse::ReflectionHasBeenSet() const
{
    return m_reflectionHasBeenSet;
}

GeneralCardWarnInfo VerifyGeneralCardWarnResponse::GetCover() const
{
    return m_cover;
}

bool VerifyGeneralCardWarnResponse::CoverHasBeenSet() const
{
    return m_coverHasBeenSet;
}

GeneralCardWarnInfo VerifyGeneralCardWarnResponse::GetOverlap() const
{
    return m_overlap;
}

bool VerifyGeneralCardWarnResponse::OverlapHasBeenSet() const
{
    return m_overlapHasBeenSet;
}

GeneralCardWarnInfo VerifyGeneralCardWarnResponse::GetElectron() const
{
    return m_electron;
}

bool VerifyGeneralCardWarnResponse::ElectronHasBeenSet() const
{
    return m_electronHasBeenSet;
}

GeneralCardWarnInfo VerifyGeneralCardWarnResponse::GetTextWatermark() const
{
    return m_textWatermark;
}

bool VerifyGeneralCardWarnResponse::TextWatermarkHasBeenSet() const
{
    return m_textWatermarkHasBeenSet;
}

string VerifyGeneralCardWarnResponse::GetWatermarkContent() const
{
    return m_watermarkContent;
}

bool VerifyGeneralCardWarnResponse::WatermarkContentHasBeenSet() const
{
    return m_watermarkContentHasBeenSet;
}


