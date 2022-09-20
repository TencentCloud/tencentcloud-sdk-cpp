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

#include <tencentcloud/faceid/v20180301/model/DetectDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

DetectDetail::DetectDetail() :
    m_reqTimeHasBeenSet(false),
    m_seqHasBeenSet(false),
    m_idcardHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_simHasBeenSet(false),
    m_isNeedChargeHasBeenSet(false),
    m_errcodeHasBeenSet(false),
    m_errmsgHasBeenSet(false),
    m_livestatusHasBeenSet(false),
    m_livemsgHasBeenSet(false),
    m_comparestatusHasBeenSet(false),
    m_comparemsgHasBeenSet(false),
    m_compareLibTypeHasBeenSet(false),
    m_livenessModeHasBeenSet(false)
{
}

CoreInternalOutcome DetectDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ReqTime") && !value["ReqTime"].IsNull())
    {
        if (!value["ReqTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetectDetail.ReqTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reqTime = string(value["ReqTime"].GetString());
        m_reqTimeHasBeenSet = true;
    }

    if (value.HasMember("Seq") && !value["Seq"].IsNull())
    {
        if (!value["Seq"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetectDetail.Seq` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_seq = string(value["Seq"].GetString());
        m_seqHasBeenSet = true;
    }

    if (value.HasMember("Idcard") && !value["Idcard"].IsNull())
    {
        if (!value["Idcard"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetectDetail.Idcard` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idcard = string(value["Idcard"].GetString());
        m_idcardHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetectDetail.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Sim") && !value["Sim"].IsNull())
    {
        if (!value["Sim"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetectDetail.Sim` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sim = string(value["Sim"].GetString());
        m_simHasBeenSet = true;
    }

    if (value.HasMember("IsNeedCharge") && !value["IsNeedCharge"].IsNull())
    {
        if (!value["IsNeedCharge"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DetectDetail.IsNeedCharge` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isNeedCharge = value["IsNeedCharge"].GetBool();
        m_isNeedChargeHasBeenSet = true;
    }

    if (value.HasMember("Errcode") && !value["Errcode"].IsNull())
    {
        if (!value["Errcode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DetectDetail.Errcode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_errcode = value["Errcode"].GetInt64();
        m_errcodeHasBeenSet = true;
    }

    if (value.HasMember("Errmsg") && !value["Errmsg"].IsNull())
    {
        if (!value["Errmsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetectDetail.Errmsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errmsg = string(value["Errmsg"].GetString());
        m_errmsgHasBeenSet = true;
    }

    if (value.HasMember("Livestatus") && !value["Livestatus"].IsNull())
    {
        if (!value["Livestatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DetectDetail.Livestatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_livestatus = value["Livestatus"].GetInt64();
        m_livestatusHasBeenSet = true;
    }

    if (value.HasMember("Livemsg") && !value["Livemsg"].IsNull())
    {
        if (!value["Livemsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetectDetail.Livemsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_livemsg = string(value["Livemsg"].GetString());
        m_livemsgHasBeenSet = true;
    }

    if (value.HasMember("Comparestatus") && !value["Comparestatus"].IsNull())
    {
        if (!value["Comparestatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DetectDetail.Comparestatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_comparestatus = value["Comparestatus"].GetInt64();
        m_comparestatusHasBeenSet = true;
    }

    if (value.HasMember("Comparemsg") && !value["Comparemsg"].IsNull())
    {
        if (!value["Comparemsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetectDetail.Comparemsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_comparemsg = string(value["Comparemsg"].GetString());
        m_comparemsgHasBeenSet = true;
    }

    if (value.HasMember("CompareLibType") && !value["CompareLibType"].IsNull())
    {
        if (!value["CompareLibType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetectDetail.CompareLibType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_compareLibType = string(value["CompareLibType"].GetString());
        m_compareLibTypeHasBeenSet = true;
    }

    if (value.HasMember("LivenessMode") && !value["LivenessMode"].IsNull())
    {
        if (!value["LivenessMode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DetectDetail.LivenessMode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_livenessMode = value["LivenessMode"].GetUint64();
        m_livenessModeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DetectDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_reqTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReqTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reqTime.c_str(), allocator).Move(), allocator);
    }

    if (m_seqHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Seq";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_seq.c_str(), allocator).Move(), allocator);
    }

    if (m_idcardHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Idcard";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_idcard.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_simHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sim";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sim.c_str(), allocator).Move(), allocator);
    }

    if (m_isNeedChargeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsNeedCharge";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isNeedCharge, allocator);
    }

    if (m_errcodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Errcode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_errcode, allocator);
    }

    if (m_errmsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Errmsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errmsg.c_str(), allocator).Move(), allocator);
    }

    if (m_livestatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Livestatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_livestatus, allocator);
    }

    if (m_livemsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Livemsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_livemsg.c_str(), allocator).Move(), allocator);
    }

    if (m_comparestatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Comparestatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_comparestatus, allocator);
    }

    if (m_comparemsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Comparemsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_comparemsg.c_str(), allocator).Move(), allocator);
    }

    if (m_compareLibTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompareLibType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_compareLibType.c_str(), allocator).Move(), allocator);
    }

    if (m_livenessModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LivenessMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_livenessMode, allocator);
    }

}


string DetectDetail::GetReqTime() const
{
    return m_reqTime;
}

void DetectDetail::SetReqTime(const string& _reqTime)
{
    m_reqTime = _reqTime;
    m_reqTimeHasBeenSet = true;
}

bool DetectDetail::ReqTimeHasBeenSet() const
{
    return m_reqTimeHasBeenSet;
}

string DetectDetail::GetSeq() const
{
    return m_seq;
}

void DetectDetail::SetSeq(const string& _seq)
{
    m_seq = _seq;
    m_seqHasBeenSet = true;
}

bool DetectDetail::SeqHasBeenSet() const
{
    return m_seqHasBeenSet;
}

string DetectDetail::GetIdcard() const
{
    return m_idcard;
}

void DetectDetail::SetIdcard(const string& _idcard)
{
    m_idcard = _idcard;
    m_idcardHasBeenSet = true;
}

bool DetectDetail::IdcardHasBeenSet() const
{
    return m_idcardHasBeenSet;
}

string DetectDetail::GetName() const
{
    return m_name;
}

void DetectDetail::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DetectDetail::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DetectDetail::GetSim() const
{
    return m_sim;
}

void DetectDetail::SetSim(const string& _sim)
{
    m_sim = _sim;
    m_simHasBeenSet = true;
}

bool DetectDetail::SimHasBeenSet() const
{
    return m_simHasBeenSet;
}

bool DetectDetail::GetIsNeedCharge() const
{
    return m_isNeedCharge;
}

void DetectDetail::SetIsNeedCharge(const bool& _isNeedCharge)
{
    m_isNeedCharge = _isNeedCharge;
    m_isNeedChargeHasBeenSet = true;
}

bool DetectDetail::IsNeedChargeHasBeenSet() const
{
    return m_isNeedChargeHasBeenSet;
}

int64_t DetectDetail::GetErrcode() const
{
    return m_errcode;
}

void DetectDetail::SetErrcode(const int64_t& _errcode)
{
    m_errcode = _errcode;
    m_errcodeHasBeenSet = true;
}

bool DetectDetail::ErrcodeHasBeenSet() const
{
    return m_errcodeHasBeenSet;
}

string DetectDetail::GetErrmsg() const
{
    return m_errmsg;
}

void DetectDetail::SetErrmsg(const string& _errmsg)
{
    m_errmsg = _errmsg;
    m_errmsgHasBeenSet = true;
}

bool DetectDetail::ErrmsgHasBeenSet() const
{
    return m_errmsgHasBeenSet;
}

int64_t DetectDetail::GetLivestatus() const
{
    return m_livestatus;
}

void DetectDetail::SetLivestatus(const int64_t& _livestatus)
{
    m_livestatus = _livestatus;
    m_livestatusHasBeenSet = true;
}

bool DetectDetail::LivestatusHasBeenSet() const
{
    return m_livestatusHasBeenSet;
}

string DetectDetail::GetLivemsg() const
{
    return m_livemsg;
}

void DetectDetail::SetLivemsg(const string& _livemsg)
{
    m_livemsg = _livemsg;
    m_livemsgHasBeenSet = true;
}

bool DetectDetail::LivemsgHasBeenSet() const
{
    return m_livemsgHasBeenSet;
}

int64_t DetectDetail::GetComparestatus() const
{
    return m_comparestatus;
}

void DetectDetail::SetComparestatus(const int64_t& _comparestatus)
{
    m_comparestatus = _comparestatus;
    m_comparestatusHasBeenSet = true;
}

bool DetectDetail::ComparestatusHasBeenSet() const
{
    return m_comparestatusHasBeenSet;
}

string DetectDetail::GetComparemsg() const
{
    return m_comparemsg;
}

void DetectDetail::SetComparemsg(const string& _comparemsg)
{
    m_comparemsg = _comparemsg;
    m_comparemsgHasBeenSet = true;
}

bool DetectDetail::ComparemsgHasBeenSet() const
{
    return m_comparemsgHasBeenSet;
}

string DetectDetail::GetCompareLibType() const
{
    return m_compareLibType;
}

void DetectDetail::SetCompareLibType(const string& _compareLibType)
{
    m_compareLibType = _compareLibType;
    m_compareLibTypeHasBeenSet = true;
}

bool DetectDetail::CompareLibTypeHasBeenSet() const
{
    return m_compareLibTypeHasBeenSet;
}

uint64_t DetectDetail::GetLivenessMode() const
{
    return m_livenessMode;
}

void DetectDetail::SetLivenessMode(const uint64_t& _livenessMode)
{
    m_livenessMode = _livenessMode;
    m_livenessModeHasBeenSet = true;
}

bool DetectDetail::LivenessModeHasBeenSet() const
{
    return m_livenessModeHasBeenSet;
}

