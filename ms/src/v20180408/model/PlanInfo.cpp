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

#include <tencentcloud/ms/v20180408/model/PlanInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ms::V20180408::Model;
using namespace std;

PlanInfo::PlanInfo() :
    m_setFileHasBeenSet(false),
    m_apkSizeOptHasBeenSet(false),
    m_dexHasBeenSet(false),
    m_soHasBeenSet(false),
    m_buglyHasBeenSet(false),
    m_antiRepackHasBeenSet(false),
    m_dbHasBeenSet(false),
    m_soInfoHasBeenSet(false),
    m_antiVMPHasBeenSet(false),
    m_soTypeHasBeenSet(false),
    m_antiLogLeakHasBeenSet(false),
    m_antiAssetsHasBeenSet(false),
    m_antiScreenshotHasBeenSet(false),
    m_antiSSLHasBeenSet(false),
    m_fileSignHasBeenSet(false),
    m_antiRootHasBeenSet(false),
    m_seperateDexHasBeenSet(false),
    m_dexSigHasBeenSet(false),
    m_antiQemuRootHasBeenSet(false)
{
}

CoreInternalOutcome PlanInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SetFile") && !value["SetFile"].IsNull())
    {
        if (!value["SetFile"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlanInfo.SetFile` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_setFile = string(value["SetFile"].GetString());
        m_setFileHasBeenSet = true;
    }

    if (value.HasMember("ApkSizeOpt") && !value["ApkSizeOpt"].IsNull())
    {
        if (!value["ApkSizeOpt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PlanInfo.ApkSizeOpt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_apkSizeOpt = value["ApkSizeOpt"].GetUint64();
        m_apkSizeOptHasBeenSet = true;
    }

    if (value.HasMember("Dex") && !value["Dex"].IsNull())
    {
        if (!value["Dex"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PlanInfo.Dex` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_dex = value["Dex"].GetUint64();
        m_dexHasBeenSet = true;
    }

    if (value.HasMember("So") && !value["So"].IsNull())
    {
        if (!value["So"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PlanInfo.So` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_so = value["So"].GetUint64();
        m_soHasBeenSet = true;
    }

    if (value.HasMember("Bugly") && !value["Bugly"].IsNull())
    {
        if (!value["Bugly"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PlanInfo.Bugly` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_bugly = value["Bugly"].GetUint64();
        m_buglyHasBeenSet = true;
    }

    if (value.HasMember("AntiRepack") && !value["AntiRepack"].IsNull())
    {
        if (!value["AntiRepack"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PlanInfo.AntiRepack` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_antiRepack = value["AntiRepack"].GetUint64();
        m_antiRepackHasBeenSet = true;
    }

    if (value.HasMember("Db") && !value["Db"].IsNull())
    {
        if (!value["Db"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PlanInfo.Db` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_db = value["Db"].GetUint64();
        m_dbHasBeenSet = true;
    }

    if (value.HasMember("SoInfo") && !value["SoInfo"].IsNull())
    {
        if (!value["SoInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PlanInfo.SoInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_soInfo.Deserialize(value["SoInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_soInfoHasBeenSet = true;
    }

    if (value.HasMember("AntiVMP") && !value["AntiVMP"].IsNull())
    {
        if (!value["AntiVMP"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PlanInfo.AntiVMP` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_antiVMP = value["AntiVMP"].GetUint64();
        m_antiVMPHasBeenSet = true;
    }

    if (value.HasMember("SoType") && !value["SoType"].IsNull())
    {
        if (!value["SoType"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PlanInfo.SoType` is not array type"));

        const rapidjson::Value &tmpValue = value["SoType"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_soType.push_back((*itr).GetString());
        }
        m_soTypeHasBeenSet = true;
    }

    if (value.HasMember("AntiLogLeak") && !value["AntiLogLeak"].IsNull())
    {
        if (!value["AntiLogLeak"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PlanInfo.AntiLogLeak` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_antiLogLeak = value["AntiLogLeak"].GetUint64();
        m_antiLogLeakHasBeenSet = true;
    }

    if (value.HasMember("AntiAssets") && !value["AntiAssets"].IsNull())
    {
        if (!value["AntiAssets"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PlanInfo.AntiAssets` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_antiAssets = value["AntiAssets"].GetUint64();
        m_antiAssetsHasBeenSet = true;
    }

    if (value.HasMember("AntiScreenshot") && !value["AntiScreenshot"].IsNull())
    {
        if (!value["AntiScreenshot"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PlanInfo.AntiScreenshot` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_antiScreenshot = value["AntiScreenshot"].GetUint64();
        m_antiScreenshotHasBeenSet = true;
    }

    if (value.HasMember("AntiSSL") && !value["AntiSSL"].IsNull())
    {
        if (!value["AntiSSL"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PlanInfo.AntiSSL` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_antiSSL = value["AntiSSL"].GetUint64();
        m_antiSSLHasBeenSet = true;
    }

    if (value.HasMember("FileSign") && !value["FileSign"].IsNull())
    {
        if (!value["FileSign"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlanInfo.FileSign` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileSign = string(value["FileSign"].GetString());
        m_fileSignHasBeenSet = true;
    }

    if (value.HasMember("AntiRoot") && !value["AntiRoot"].IsNull())
    {
        if (!value["AntiRoot"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlanInfo.AntiRoot` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_antiRoot = string(value["AntiRoot"].GetString());
        m_antiRootHasBeenSet = true;
    }

    if (value.HasMember("SeperateDex") && !value["SeperateDex"].IsNull())
    {
        if (!value["SeperateDex"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PlanInfo.SeperateDex` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_seperateDex = value["SeperateDex"].GetUint64();
        m_seperateDexHasBeenSet = true;
    }

    if (value.HasMember("DexSig") && !value["DexSig"].IsNull())
    {
        if (!value["DexSig"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PlanInfo.DexSig` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_dexSig = value["DexSig"].GetUint64();
        m_dexSigHasBeenSet = true;
    }

    if (value.HasMember("AntiQemuRoot") && !value["AntiQemuRoot"].IsNull())
    {
        if (!value["AntiQemuRoot"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PlanInfo.AntiQemuRoot` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_antiQemuRoot = value["AntiQemuRoot"].GetUint64();
        m_antiQemuRootHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PlanInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_setFileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SetFile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_setFile.c_str(), allocator).Move(), allocator);
    }

    if (m_apkSizeOptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApkSizeOpt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_apkSizeOpt, allocator);
    }

    if (m_dexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Dex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dex, allocator);
    }

    if (m_soHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "So";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_so, allocator);
    }

    if (m_buglyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bugly";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bugly, allocator);
    }

    if (m_antiRepackHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AntiRepack";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_antiRepack, allocator);
    }

    if (m_dbHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Db";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_db, allocator);
    }

    if (m_soInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SoInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_soInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_antiVMPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AntiVMP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_antiVMP, allocator);
    }

    if (m_soTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SoType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_soType.begin(); itr != m_soType.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_antiLogLeakHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AntiLogLeak";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_antiLogLeak, allocator);
    }

    if (m_antiAssetsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AntiAssets";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_antiAssets, allocator);
    }

    if (m_antiScreenshotHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AntiScreenshot";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_antiScreenshot, allocator);
    }

    if (m_antiSSLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AntiSSL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_antiSSL, allocator);
    }

    if (m_fileSignHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSign";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileSign.c_str(), allocator).Move(), allocator);
    }

    if (m_antiRootHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AntiRoot";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_antiRoot.c_str(), allocator).Move(), allocator);
    }

    if (m_seperateDexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SeperateDex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_seperateDex, allocator);
    }

    if (m_dexSigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DexSig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dexSig, allocator);
    }

    if (m_antiQemuRootHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AntiQemuRoot";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_antiQemuRoot, allocator);
    }

}


string PlanInfo::GetSetFile() const
{
    return m_setFile;
}

void PlanInfo::SetSetFile(const string& _setFile)
{
    m_setFile = _setFile;
    m_setFileHasBeenSet = true;
}

bool PlanInfo::SetFileHasBeenSet() const
{
    return m_setFileHasBeenSet;
}

uint64_t PlanInfo::GetApkSizeOpt() const
{
    return m_apkSizeOpt;
}

void PlanInfo::SetApkSizeOpt(const uint64_t& _apkSizeOpt)
{
    m_apkSizeOpt = _apkSizeOpt;
    m_apkSizeOptHasBeenSet = true;
}

bool PlanInfo::ApkSizeOptHasBeenSet() const
{
    return m_apkSizeOptHasBeenSet;
}

uint64_t PlanInfo::GetDex() const
{
    return m_dex;
}

void PlanInfo::SetDex(const uint64_t& _dex)
{
    m_dex = _dex;
    m_dexHasBeenSet = true;
}

bool PlanInfo::DexHasBeenSet() const
{
    return m_dexHasBeenSet;
}

uint64_t PlanInfo::GetSo() const
{
    return m_so;
}

void PlanInfo::SetSo(const uint64_t& _so)
{
    m_so = _so;
    m_soHasBeenSet = true;
}

bool PlanInfo::SoHasBeenSet() const
{
    return m_soHasBeenSet;
}

uint64_t PlanInfo::GetBugly() const
{
    return m_bugly;
}

void PlanInfo::SetBugly(const uint64_t& _bugly)
{
    m_bugly = _bugly;
    m_buglyHasBeenSet = true;
}

bool PlanInfo::BuglyHasBeenSet() const
{
    return m_buglyHasBeenSet;
}

uint64_t PlanInfo::GetAntiRepack() const
{
    return m_antiRepack;
}

void PlanInfo::SetAntiRepack(const uint64_t& _antiRepack)
{
    m_antiRepack = _antiRepack;
    m_antiRepackHasBeenSet = true;
}

bool PlanInfo::AntiRepackHasBeenSet() const
{
    return m_antiRepackHasBeenSet;
}

uint64_t PlanInfo::GetDb() const
{
    return m_db;
}

void PlanInfo::SetDb(const uint64_t& _db)
{
    m_db = _db;
    m_dbHasBeenSet = true;
}

bool PlanInfo::DbHasBeenSet() const
{
    return m_dbHasBeenSet;
}

SoInfo PlanInfo::GetSoInfo() const
{
    return m_soInfo;
}

void PlanInfo::SetSoInfo(const SoInfo& _soInfo)
{
    m_soInfo = _soInfo;
    m_soInfoHasBeenSet = true;
}

bool PlanInfo::SoInfoHasBeenSet() const
{
    return m_soInfoHasBeenSet;
}

uint64_t PlanInfo::GetAntiVMP() const
{
    return m_antiVMP;
}

void PlanInfo::SetAntiVMP(const uint64_t& _antiVMP)
{
    m_antiVMP = _antiVMP;
    m_antiVMPHasBeenSet = true;
}

bool PlanInfo::AntiVMPHasBeenSet() const
{
    return m_antiVMPHasBeenSet;
}

vector<string> PlanInfo::GetSoType() const
{
    return m_soType;
}

void PlanInfo::SetSoType(const vector<string>& _soType)
{
    m_soType = _soType;
    m_soTypeHasBeenSet = true;
}

bool PlanInfo::SoTypeHasBeenSet() const
{
    return m_soTypeHasBeenSet;
}

uint64_t PlanInfo::GetAntiLogLeak() const
{
    return m_antiLogLeak;
}

void PlanInfo::SetAntiLogLeak(const uint64_t& _antiLogLeak)
{
    m_antiLogLeak = _antiLogLeak;
    m_antiLogLeakHasBeenSet = true;
}

bool PlanInfo::AntiLogLeakHasBeenSet() const
{
    return m_antiLogLeakHasBeenSet;
}

uint64_t PlanInfo::GetAntiAssets() const
{
    return m_antiAssets;
}

void PlanInfo::SetAntiAssets(const uint64_t& _antiAssets)
{
    m_antiAssets = _antiAssets;
    m_antiAssetsHasBeenSet = true;
}

bool PlanInfo::AntiAssetsHasBeenSet() const
{
    return m_antiAssetsHasBeenSet;
}

uint64_t PlanInfo::GetAntiScreenshot() const
{
    return m_antiScreenshot;
}

void PlanInfo::SetAntiScreenshot(const uint64_t& _antiScreenshot)
{
    m_antiScreenshot = _antiScreenshot;
    m_antiScreenshotHasBeenSet = true;
}

bool PlanInfo::AntiScreenshotHasBeenSet() const
{
    return m_antiScreenshotHasBeenSet;
}

uint64_t PlanInfo::GetAntiSSL() const
{
    return m_antiSSL;
}

void PlanInfo::SetAntiSSL(const uint64_t& _antiSSL)
{
    m_antiSSL = _antiSSL;
    m_antiSSLHasBeenSet = true;
}

bool PlanInfo::AntiSSLHasBeenSet() const
{
    return m_antiSSLHasBeenSet;
}

string PlanInfo::GetFileSign() const
{
    return m_fileSign;
}

void PlanInfo::SetFileSign(const string& _fileSign)
{
    m_fileSign = _fileSign;
    m_fileSignHasBeenSet = true;
}

bool PlanInfo::FileSignHasBeenSet() const
{
    return m_fileSignHasBeenSet;
}

string PlanInfo::GetAntiRoot() const
{
    return m_antiRoot;
}

void PlanInfo::SetAntiRoot(const string& _antiRoot)
{
    m_antiRoot = _antiRoot;
    m_antiRootHasBeenSet = true;
}

bool PlanInfo::AntiRootHasBeenSet() const
{
    return m_antiRootHasBeenSet;
}

uint64_t PlanInfo::GetSeperateDex() const
{
    return m_seperateDex;
}

void PlanInfo::SetSeperateDex(const uint64_t& _seperateDex)
{
    m_seperateDex = _seperateDex;
    m_seperateDexHasBeenSet = true;
}

bool PlanInfo::SeperateDexHasBeenSet() const
{
    return m_seperateDexHasBeenSet;
}

uint64_t PlanInfo::GetDexSig() const
{
    return m_dexSig;
}

void PlanInfo::SetDexSig(const uint64_t& _dexSig)
{
    m_dexSig = _dexSig;
    m_dexSigHasBeenSet = true;
}

bool PlanInfo::DexSigHasBeenSet() const
{
    return m_dexSigHasBeenSet;
}

uint64_t PlanInfo::GetAntiQemuRoot() const
{
    return m_antiQemuRoot;
}

void PlanInfo::SetAntiQemuRoot(const uint64_t& _antiQemuRoot)
{
    m_antiQemuRoot = _antiQemuRoot;
    m_antiQemuRootHasBeenSet = true;
}

bool PlanInfo::AntiQemuRootHasBeenSet() const
{
    return m_antiQemuRootHasBeenSet;
}

