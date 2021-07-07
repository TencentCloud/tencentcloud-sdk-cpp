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

#include <tencentcloud/cwp/v20180228/model/DescribeScanTaskDetailsResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

DescribeScanTaskDetailsResponse::DescribeScanTaskDetailsResponse() :
    m_scanTaskDetailListHasBeenSet(false),
    m_totalCountHasBeenSet(false),
    m_scanMachineCountHasBeenSet(false),
    m_riskMachineCountHasBeenSet(false),
    m_scanBeginTimeHasBeenSet(false),
    m_scanEndTimeHasBeenSet(false),
    m_scanTimeHasBeenSet(false),
    m_scanProgressHasBeenSet(false),
    m_scanLeftTimeHasBeenSet(false),
    m_scanContentHasBeenSet(false),
    m_vulInfoHasBeenSet(false),
    m_riskEventCountHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_stoppingAllHasBeenSet(false)
{
}

CoreInternalOutcome DescribeScanTaskDetailsResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("ScanTaskDetailList") && !rsp["ScanTaskDetailList"].IsNull())
    {
        if (!rsp["ScanTaskDetailList"].IsArray())
            return CoreInternalOutcome(Error("response `ScanTaskDetailList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ScanTaskDetailList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ScanTaskDetails item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_scanTaskDetailList.push_back(item);
        }
        m_scanTaskDetailListHasBeenSet = true;
    }

    if (rsp.HasMember("TotalCount") && !rsp["TotalCount"].IsNull())
    {
        if (!rsp["TotalCount"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `TotalCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = rsp["TotalCount"].GetUint64();
        m_totalCountHasBeenSet = true;
    }

    if (rsp.HasMember("ScanMachineCount") && !rsp["ScanMachineCount"].IsNull())
    {
        if (!rsp["ScanMachineCount"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `ScanMachineCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_scanMachineCount = rsp["ScanMachineCount"].GetUint64();
        m_scanMachineCountHasBeenSet = true;
    }

    if (rsp.HasMember("RiskMachineCount") && !rsp["RiskMachineCount"].IsNull())
    {
        if (!rsp["RiskMachineCount"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `RiskMachineCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_riskMachineCount = rsp["RiskMachineCount"].GetUint64();
        m_riskMachineCountHasBeenSet = true;
    }

    if (rsp.HasMember("ScanBeginTime") && !rsp["ScanBeginTime"].IsNull())
    {
        if (!rsp["ScanBeginTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `ScanBeginTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scanBeginTime = string(rsp["ScanBeginTime"].GetString());
        m_scanBeginTimeHasBeenSet = true;
    }

    if (rsp.HasMember("ScanEndTime") && !rsp["ScanEndTime"].IsNull())
    {
        if (!rsp["ScanEndTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `ScanEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scanEndTime = string(rsp["ScanEndTime"].GetString());
        m_scanEndTimeHasBeenSet = true;
    }

    if (rsp.HasMember("ScanTime") && !rsp["ScanTime"].IsNull())
    {
        if (!rsp["ScanTime"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `ScanTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_scanTime = rsp["ScanTime"].GetUint64();
        m_scanTimeHasBeenSet = true;
    }

    if (rsp.HasMember("ScanProgress") && !rsp["ScanProgress"].IsNull())
    {
        if (!rsp["ScanProgress"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `ScanProgress` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_scanProgress = rsp["ScanProgress"].GetUint64();
        m_scanProgressHasBeenSet = true;
    }

    if (rsp.HasMember("ScanLeftTime") && !rsp["ScanLeftTime"].IsNull())
    {
        if (!rsp["ScanLeftTime"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `ScanLeftTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_scanLeftTime = rsp["ScanLeftTime"].GetUint64();
        m_scanLeftTimeHasBeenSet = true;
    }

    if (rsp.HasMember("ScanContent") && !rsp["ScanContent"].IsNull())
    {
        if (!rsp["ScanContent"].IsArray())
            return CoreInternalOutcome(Error("response `ScanContent` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ScanContent"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_scanContent.push_back((*itr).GetString());
        }
        m_scanContentHasBeenSet = true;
    }

    if (rsp.HasMember("VulInfo") && !rsp["VulInfo"].IsNull())
    {
        if (!rsp["VulInfo"].IsArray())
            return CoreInternalOutcome(Error("response `VulInfo` is not array type"));

        const rapidjson::Value &tmpValue = rsp["VulInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VulDetailInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_vulInfo.push_back(item);
        }
        m_vulInfoHasBeenSet = true;
    }

    if (rsp.HasMember("RiskEventCount") && !rsp["RiskEventCount"].IsNull())
    {
        if (!rsp["RiskEventCount"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `RiskEventCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_riskEventCount = rsp["RiskEventCount"].GetUint64();
        m_riskEventCountHasBeenSet = true;
    }

    if (rsp.HasMember("Type") && !rsp["Type"].IsNull())
    {
        if (!rsp["Type"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `Type` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_type = rsp["Type"].GetUint64();
        m_typeHasBeenSet = true;
    }

    if (rsp.HasMember("StoppingAll") && !rsp["StoppingAll"].IsNull())
    {
        if (!rsp["StoppingAll"].IsBool())
        {
            return CoreInternalOutcome(Error("response `StoppingAll` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_stoppingAll = rsp["StoppingAll"].GetBool();
        m_stoppingAllHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


vector<ScanTaskDetails> DescribeScanTaskDetailsResponse::GetScanTaskDetailList() const
{
    return m_scanTaskDetailList;
}

bool DescribeScanTaskDetailsResponse::ScanTaskDetailListHasBeenSet() const
{
    return m_scanTaskDetailListHasBeenSet;
}

uint64_t DescribeScanTaskDetailsResponse::GetTotalCount() const
{
    return m_totalCount;
}

bool DescribeScanTaskDetailsResponse::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

uint64_t DescribeScanTaskDetailsResponse::GetScanMachineCount() const
{
    return m_scanMachineCount;
}

bool DescribeScanTaskDetailsResponse::ScanMachineCountHasBeenSet() const
{
    return m_scanMachineCountHasBeenSet;
}

uint64_t DescribeScanTaskDetailsResponse::GetRiskMachineCount() const
{
    return m_riskMachineCount;
}

bool DescribeScanTaskDetailsResponse::RiskMachineCountHasBeenSet() const
{
    return m_riskMachineCountHasBeenSet;
}

string DescribeScanTaskDetailsResponse::GetScanBeginTime() const
{
    return m_scanBeginTime;
}

bool DescribeScanTaskDetailsResponse::ScanBeginTimeHasBeenSet() const
{
    return m_scanBeginTimeHasBeenSet;
}

string DescribeScanTaskDetailsResponse::GetScanEndTime() const
{
    return m_scanEndTime;
}

bool DescribeScanTaskDetailsResponse::ScanEndTimeHasBeenSet() const
{
    return m_scanEndTimeHasBeenSet;
}

uint64_t DescribeScanTaskDetailsResponse::GetScanTime() const
{
    return m_scanTime;
}

bool DescribeScanTaskDetailsResponse::ScanTimeHasBeenSet() const
{
    return m_scanTimeHasBeenSet;
}

uint64_t DescribeScanTaskDetailsResponse::GetScanProgress() const
{
    return m_scanProgress;
}

bool DescribeScanTaskDetailsResponse::ScanProgressHasBeenSet() const
{
    return m_scanProgressHasBeenSet;
}

uint64_t DescribeScanTaskDetailsResponse::GetScanLeftTime() const
{
    return m_scanLeftTime;
}

bool DescribeScanTaskDetailsResponse::ScanLeftTimeHasBeenSet() const
{
    return m_scanLeftTimeHasBeenSet;
}

vector<string> DescribeScanTaskDetailsResponse::GetScanContent() const
{
    return m_scanContent;
}

bool DescribeScanTaskDetailsResponse::ScanContentHasBeenSet() const
{
    return m_scanContentHasBeenSet;
}

vector<VulDetailInfo> DescribeScanTaskDetailsResponse::GetVulInfo() const
{
    return m_vulInfo;
}

bool DescribeScanTaskDetailsResponse::VulInfoHasBeenSet() const
{
    return m_vulInfoHasBeenSet;
}

uint64_t DescribeScanTaskDetailsResponse::GetRiskEventCount() const
{
    return m_riskEventCount;
}

bool DescribeScanTaskDetailsResponse::RiskEventCountHasBeenSet() const
{
    return m_riskEventCountHasBeenSet;
}

uint64_t DescribeScanTaskDetailsResponse::GetType() const
{
    return m_type;
}

bool DescribeScanTaskDetailsResponse::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

bool DescribeScanTaskDetailsResponse::GetStoppingAll() const
{
    return m_stoppingAll;
}

bool DescribeScanTaskDetailsResponse::StoppingAllHasBeenSet() const
{
    return m_stoppingAllHasBeenSet;
}


