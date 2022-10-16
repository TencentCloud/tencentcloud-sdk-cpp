/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#include <tencentcloud/faceid/v20180301/model/CompareResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

CompareResult::CompareResult() :
    m_errorCodeHasBeenSet(false),
    m_errorMsgHasBeenSet(false),
    m_liveDataHasBeenSet(false),
    m_liveVideoHasBeenSet(false),
    m_liveErrorCodeHasBeenSet(false),
    m_liveErrorMsgHasBeenSet(false),
    m_bestFrameHasBeenSet(false),
    m_profileImageHasBeenSet(false),
    m_compareErrorCodeHasBeenSet(false),
    m_compareErrorMsgHasBeenSet(false),
    m_simHasBeenSet(false),
    m_isNeedChargeHasBeenSet(false),
    m_cardInfoInputJsonHasBeenSet(false),
    m_requestIdHasBeenSet(false)
{
}

CoreInternalOutcome CompareResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ErrorCode") && !value["ErrorCode"].IsNull())
    {
        if (!value["ErrorCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompareResult.ErrorCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorCode = string(value["ErrorCode"].GetString());
        m_errorCodeHasBeenSet = true;
    }

    if (value.HasMember("ErrorMsg") && !value["ErrorMsg"].IsNull())
    {
        if (!value["ErrorMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompareResult.ErrorMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorMsg = string(value["ErrorMsg"].GetString());
        m_errorMsgHasBeenSet = true;
    }

    if (value.HasMember("LiveData") && !value["LiveData"].IsNull())
    {
        if (!value["LiveData"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CompareResult.LiveData` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_liveData.Deserialize(value["LiveData"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_liveDataHasBeenSet = true;
    }

    if (value.HasMember("LiveVideo") && !value["LiveVideo"].IsNull())
    {
        if (!value["LiveVideo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CompareResult.LiveVideo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_liveVideo.Deserialize(value["LiveVideo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_liveVideoHasBeenSet = true;
    }

    if (value.HasMember("LiveErrorCode") && !value["LiveErrorCode"].IsNull())
    {
        if (!value["LiveErrorCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompareResult.LiveErrorCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_liveErrorCode = string(value["LiveErrorCode"].GetString());
        m_liveErrorCodeHasBeenSet = true;
    }

    if (value.HasMember("LiveErrorMsg") && !value["LiveErrorMsg"].IsNull())
    {
        if (!value["LiveErrorMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompareResult.LiveErrorMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_liveErrorMsg = string(value["LiveErrorMsg"].GetString());
        m_liveErrorMsgHasBeenSet = true;
    }

    if (value.HasMember("BestFrame") && !value["BestFrame"].IsNull())
    {
        if (!value["BestFrame"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CompareResult.BestFrame` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_bestFrame.Deserialize(value["BestFrame"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_bestFrameHasBeenSet = true;
    }

    if (value.HasMember("ProfileImage") && !value["ProfileImage"].IsNull())
    {
        if (!value["ProfileImage"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CompareResult.ProfileImage` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_profileImage.Deserialize(value["ProfileImage"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_profileImageHasBeenSet = true;
    }

    if (value.HasMember("CompareErrorCode") && !value["CompareErrorCode"].IsNull())
    {
        if (!value["CompareErrorCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompareResult.CompareErrorCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_compareErrorCode = string(value["CompareErrorCode"].GetString());
        m_compareErrorCodeHasBeenSet = true;
    }

    if (value.HasMember("CompareErrorMsg") && !value["CompareErrorMsg"].IsNull())
    {
        if (!value["CompareErrorMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompareResult.CompareErrorMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_compareErrorMsg = string(value["CompareErrorMsg"].GetString());
        m_compareErrorMsgHasBeenSet = true;
    }

    if (value.HasMember("Sim") && !value["Sim"].IsNull())
    {
        if (!value["Sim"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CompareResult.Sim` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_sim = value["Sim"].GetDouble();
        m_simHasBeenSet = true;
    }

    if (value.HasMember("IsNeedCharge") && !value["IsNeedCharge"].IsNull())
    {
        if (!value["IsNeedCharge"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CompareResult.IsNeedCharge` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isNeedCharge = value["IsNeedCharge"].GetBool();
        m_isNeedChargeHasBeenSet = true;
    }

    if (value.HasMember("CardInfoInputJson") && !value["CardInfoInputJson"].IsNull())
    {
        if (!value["CardInfoInputJson"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CompareResult.CardInfoInputJson` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cardInfoInputJson.Deserialize(value["CardInfoInputJson"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cardInfoInputJsonHasBeenSet = true;
    }

    if (value.HasMember("RequestId") && !value["RequestId"].IsNull())
    {
        if (!value["RequestId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompareResult.RequestId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_requestId = string(value["RequestId"].GetString());
        m_requestIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CompareResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_errorCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorCode.c_str(), allocator).Move(), allocator);
    }

    if (m_errorMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_liveDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LiveData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_liveData.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_liveVideoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LiveVideo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_liveVideo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_liveErrorCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LiveErrorCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_liveErrorCode.c_str(), allocator).Move(), allocator);
    }

    if (m_liveErrorMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LiveErrorMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_liveErrorMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_bestFrameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BestFrame";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_bestFrame.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_profileImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProfileImage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_profileImage.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_compareErrorCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompareErrorCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_compareErrorCode.c_str(), allocator).Move(), allocator);
    }

    if (m_compareErrorMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompareErrorMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_compareErrorMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_simHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sim";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sim, allocator);
    }

    if (m_isNeedChargeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsNeedCharge";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isNeedCharge, allocator);
    }

    if (m_cardInfoInputJsonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CardInfoInputJson";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cardInfoInputJson.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_requestIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_requestId.c_str(), allocator).Move(), allocator);
    }

}


string CompareResult::GetErrorCode() const
{
    return m_errorCode;
}

void CompareResult::SetErrorCode(const string& _errorCode)
{
    m_errorCode = _errorCode;
    m_errorCodeHasBeenSet = true;
}

bool CompareResult::ErrorCodeHasBeenSet() const
{
    return m_errorCodeHasBeenSet;
}

string CompareResult::GetErrorMsg() const
{
    return m_errorMsg;
}

void CompareResult::SetErrorMsg(const string& _errorMsg)
{
    m_errorMsg = _errorMsg;
    m_errorMsgHasBeenSet = true;
}

bool CompareResult::ErrorMsgHasBeenSet() const
{
    return m_errorMsgHasBeenSet;
}

FileInfo CompareResult::GetLiveData() const
{
    return m_liveData;
}

void CompareResult::SetLiveData(const FileInfo& _liveData)
{
    m_liveData = _liveData;
    m_liveDataHasBeenSet = true;
}

bool CompareResult::LiveDataHasBeenSet() const
{
    return m_liveDataHasBeenSet;
}

FileInfo CompareResult::GetLiveVideo() const
{
    return m_liveVideo;
}

void CompareResult::SetLiveVideo(const FileInfo& _liveVideo)
{
    m_liveVideo = _liveVideo;
    m_liveVideoHasBeenSet = true;
}

bool CompareResult::LiveVideoHasBeenSet() const
{
    return m_liveVideoHasBeenSet;
}

string CompareResult::GetLiveErrorCode() const
{
    return m_liveErrorCode;
}

void CompareResult::SetLiveErrorCode(const string& _liveErrorCode)
{
    m_liveErrorCode = _liveErrorCode;
    m_liveErrorCodeHasBeenSet = true;
}

bool CompareResult::LiveErrorCodeHasBeenSet() const
{
    return m_liveErrorCodeHasBeenSet;
}

string CompareResult::GetLiveErrorMsg() const
{
    return m_liveErrorMsg;
}

void CompareResult::SetLiveErrorMsg(const string& _liveErrorMsg)
{
    m_liveErrorMsg = _liveErrorMsg;
    m_liveErrorMsgHasBeenSet = true;
}

bool CompareResult::LiveErrorMsgHasBeenSet() const
{
    return m_liveErrorMsgHasBeenSet;
}

FileInfo CompareResult::GetBestFrame() const
{
    return m_bestFrame;
}

void CompareResult::SetBestFrame(const FileInfo& _bestFrame)
{
    m_bestFrame = _bestFrame;
    m_bestFrameHasBeenSet = true;
}

bool CompareResult::BestFrameHasBeenSet() const
{
    return m_bestFrameHasBeenSet;
}

FileInfo CompareResult::GetProfileImage() const
{
    return m_profileImage;
}

void CompareResult::SetProfileImage(const FileInfo& _profileImage)
{
    m_profileImage = _profileImage;
    m_profileImageHasBeenSet = true;
}

bool CompareResult::ProfileImageHasBeenSet() const
{
    return m_profileImageHasBeenSet;
}

string CompareResult::GetCompareErrorCode() const
{
    return m_compareErrorCode;
}

void CompareResult::SetCompareErrorCode(const string& _compareErrorCode)
{
    m_compareErrorCode = _compareErrorCode;
    m_compareErrorCodeHasBeenSet = true;
}

bool CompareResult::CompareErrorCodeHasBeenSet() const
{
    return m_compareErrorCodeHasBeenSet;
}

string CompareResult::GetCompareErrorMsg() const
{
    return m_compareErrorMsg;
}

void CompareResult::SetCompareErrorMsg(const string& _compareErrorMsg)
{
    m_compareErrorMsg = _compareErrorMsg;
    m_compareErrorMsgHasBeenSet = true;
}

bool CompareResult::CompareErrorMsgHasBeenSet() const
{
    return m_compareErrorMsgHasBeenSet;
}

double CompareResult::GetSim() const
{
    return m_sim;
}

void CompareResult::SetSim(const double& _sim)
{
    m_sim = _sim;
    m_simHasBeenSet = true;
}

bool CompareResult::SimHasBeenSet() const
{
    return m_simHasBeenSet;
}

bool CompareResult::GetIsNeedCharge() const
{
    return m_isNeedCharge;
}

void CompareResult::SetIsNeedCharge(const bool& _isNeedCharge)
{
    m_isNeedCharge = _isNeedCharge;
    m_isNeedChargeHasBeenSet = true;
}

bool CompareResult::IsNeedChargeHasBeenSet() const
{
    return m_isNeedChargeHasBeenSet;
}

FileInfo CompareResult::GetCardInfoInputJson() const
{
    return m_cardInfoInputJson;
}

void CompareResult::SetCardInfoInputJson(const FileInfo& _cardInfoInputJson)
{
    m_cardInfoInputJson = _cardInfoInputJson;
    m_cardInfoInputJsonHasBeenSet = true;
}

bool CompareResult::CardInfoInputJsonHasBeenSet() const
{
    return m_cardInfoInputJsonHasBeenSet;
}

string CompareResult::GetRequestId() const
{
    return m_requestId;
}

void CompareResult::SetRequestId(const string& _requestId)
{
    m_requestId = _requestId;
    m_requestIdHasBeenSet = true;
}

bool CompareResult::RequestIdHasBeenSet() const
{
    return m_requestIdHasBeenSet;
}

