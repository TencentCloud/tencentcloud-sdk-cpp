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

#include <tencentcloud/wedata/v20250806/model/CreateDataReplenishmentPlan.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

CreateDataReplenishmentPlan::CreateDataReplenishmentPlan() :
    m_dataBackfillPlanIdHasBeenSet(false)
{
}

CoreInternalOutcome CreateDataReplenishmentPlan::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DataBackfillPlanId") && !value["DataBackfillPlanId"].IsNull())
    {
        if (!value["DataBackfillPlanId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateDataReplenishmentPlan.DataBackfillPlanId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataBackfillPlanId = string(value["DataBackfillPlanId"].GetString());
        m_dataBackfillPlanIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateDataReplenishmentPlan::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dataBackfillPlanIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataBackfillPlanId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataBackfillPlanId.c_str(), allocator).Move(), allocator);
    }

}


string CreateDataReplenishmentPlan::GetDataBackfillPlanId() const
{
    return m_dataBackfillPlanId;
}

void CreateDataReplenishmentPlan::SetDataBackfillPlanId(const string& _dataBackfillPlanId)
{
    m_dataBackfillPlanId = _dataBackfillPlanId;
    m_dataBackfillPlanIdHasBeenSet = true;
}

bool CreateDataReplenishmentPlan::DataBackfillPlanIdHasBeenSet() const
{
    return m_dataBackfillPlanIdHasBeenSet;
}

