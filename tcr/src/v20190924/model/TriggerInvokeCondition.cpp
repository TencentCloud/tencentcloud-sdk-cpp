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

#include <tencentcloud/tcr/v20190924/model/TriggerInvokeCondition.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcr::V20190924::Model;
using namespace std;

TriggerInvokeCondition::TriggerInvokeCondition() :
    m_invokeMethodHasBeenSet(false),
    m_invokeExprHasBeenSet(false)
{
}

CoreInternalOutcome TriggerInvokeCondition::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InvokeMethod") && !value["InvokeMethod"].IsNull())
    {
        if (!value["InvokeMethod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerInvokeCondition.InvokeMethod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_invokeMethod = string(value["InvokeMethod"].GetString());
        m_invokeMethodHasBeenSet = true;
    }

    if (value.HasMember("InvokeExpr") && !value["InvokeExpr"].IsNull())
    {
        if (!value["InvokeExpr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerInvokeCondition.InvokeExpr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_invokeExpr = string(value["InvokeExpr"].GetString());
        m_invokeExprHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TriggerInvokeCondition::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_invokeMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvokeMethod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_invokeMethod.c_str(), allocator).Move(), allocator);
    }

    if (m_invokeExprHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvokeExpr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_invokeExpr.c_str(), allocator).Move(), allocator);
    }

}


string TriggerInvokeCondition::GetInvokeMethod() const
{
    return m_invokeMethod;
}

void TriggerInvokeCondition::SetInvokeMethod(const string& _invokeMethod)
{
    m_invokeMethod = _invokeMethod;
    m_invokeMethodHasBeenSet = true;
}

bool TriggerInvokeCondition::InvokeMethodHasBeenSet() const
{
    return m_invokeMethodHasBeenSet;
}

string TriggerInvokeCondition::GetInvokeExpr() const
{
    return m_invokeExpr;
}

void TriggerInvokeCondition::SetInvokeExpr(const string& _invokeExpr)
{
    m_invokeExpr = _invokeExpr;
    m_invokeExprHasBeenSet = true;
}

bool TriggerInvokeCondition::InvokeExprHasBeenSet() const
{
    return m_invokeExprHasBeenSet;
}

