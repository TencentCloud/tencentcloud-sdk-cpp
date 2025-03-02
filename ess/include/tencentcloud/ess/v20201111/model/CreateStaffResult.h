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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CREATESTAFFRESULT_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CREATESTAFFRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/SuccessCreateStaffData.h>
#include <tencentcloud/ess/v20201111/model/FailedCreateStaffData.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * 创建员工的结果
                */
                class CreateStaffResult : public AbstractModel
                {
                public:
                    CreateStaffResult();
                    ~CreateStaffResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取创建员工的成功列表
                     * @return SuccessEmployeeData 创建员工的成功列表
                     * 
                     */
                    std::vector<SuccessCreateStaffData> GetSuccessEmployeeData() const;

                    /**
                     * 设置创建员工的成功列表
                     * @param _successEmployeeData 创建员工的成功列表
                     * 
                     */
                    void SetSuccessEmployeeData(const std::vector<SuccessCreateStaffData>& _successEmployeeData);

                    /**
                     * 判断参数 SuccessEmployeeData 是否已赋值
                     * @return SuccessEmployeeData 是否已赋值
                     * 
                     */
                    bool SuccessEmployeeDataHasBeenSet() const;

                    /**
                     * 获取创建员工的失败列表
                     * @return FailedEmployeeData 创建员工的失败列表
                     * 
                     */
                    std::vector<FailedCreateStaffData> GetFailedEmployeeData() const;

                    /**
                     * 设置创建员工的失败列表
                     * @param _failedEmployeeData 创建员工的失败列表
                     * 
                     */
                    void SetFailedEmployeeData(const std::vector<FailedCreateStaffData>& _failedEmployeeData);

                    /**
                     * 判断参数 FailedEmployeeData 是否已赋值
                     * @return FailedEmployeeData 是否已赋值
                     * 
                     */
                    bool FailedEmployeeDataHasBeenSet() const;

                private:

                    /**
                     * 创建员工的成功列表
                     */
                    std::vector<SuccessCreateStaffData> m_successEmployeeData;
                    bool m_successEmployeeDataHasBeenSet;

                    /**
                     * 创建员工的失败列表
                     */
                    std::vector<FailedCreateStaffData> m_failedEmployeeData;
                    bool m_failedEmployeeDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATESTAFFRESULT_H_
