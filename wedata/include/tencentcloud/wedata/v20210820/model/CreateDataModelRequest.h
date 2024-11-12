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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATEDATAMODELREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATEDATAMODELREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * CreateDataModel请求参数结构体
                */
                class CreateDataModelRequest : public AbstractModel
                {
                public:
                    CreateDataModelRequest();
                    ~CreateDataModelRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取云应用的实例id
                     * @return CloudappId 云应用的实例id
                     * 
                     */
                    std::string GetCloudappId() const;

                    /**
                     * 设置云应用的实例id
                     * @param _cloudappId 云应用的实例id
                     * 
                     */
                    void SetCloudappId(const std::string& _cloudappId);

                    /**
                     * 判断参数 CloudappId 是否已赋值
                     * @return CloudappId 是否已赋值
                     * 
                     */
                    bool CloudappIdHasBeenSet() const;

                    /**
                     * 获取用户的子账号id
                     * @return UserId 用户的子账号id
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户的子账号id
                     * @param _userId 用户的子账号id
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取Wedata数据建模购买参数，包年包月类型单位，年：y，月：m，默认m
                     * @return TimeUnit Wedata数据建模购买参数，包年包月类型单位，年：y，月：m，默认m
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置Wedata数据建模购买参数，包年包月类型单位，年：y，月：m，默认m
                     * @param _timeUnit Wedata数据建模购买参数，包年包月类型单位，年：y，月：m，默认m
                     * 
                     */
                    void SetTimeUnit(const std::string& _timeUnit);

                    /**
                     * 判断参数 TimeUnit 是否已赋值
                     * @return TimeUnit 是否已赋值
                     * 
                     */
                    bool TimeUnitHasBeenSet() const;

                    /**
                     * 获取Wedata数据建模购买参数，购买时长，默认1
                     * @return TimeSpan Wedata数据建模购买参数，购买时长，默认1
                     * 
                     */
                    int64_t GetTimeSpan() const;

                    /**
                     * 设置Wedata数据建模购买参数，购买时长，默认1
                     * @param _timeSpan Wedata数据建模购买参数，购买时长，默认1
                     * 
                     */
                    void SetTimeSpan(const int64_t& _timeSpan);

                    /**
                     * 判断参数 TimeSpan 是否已赋值
                     * @return TimeSpan 是否已赋值
                     * 
                     */
                    bool TimeSpanHasBeenSet() const;

                    /**
                     * 获取Wedata数据建模购买参数，是否自动续费，是：1，否：0，默认0
                     * @return AutoRenewFlag Wedata数据建模购买参数，是否自动续费，是：1，否：0，默认0
                     * 
                     */
                    uint64_t GetAutoRenewFlag() const;

                    /**
                     * 设置Wedata数据建模购买参数，是否自动续费，是：1，否：0，默认0
                     * @param _autoRenewFlag Wedata数据建模购买参数，是否自动续费，是：1，否：0，默认0
                     * 
                     */
                    void SetAutoRenewFlag(const uint64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取Wedata数据建模购买参数，标准版：DATA_MODEL_STANDARD，企业版：DATA_MODEL_PRO，默认DATA_MODEL_STANDARD
                     * @return DataModelVersion Wedata数据建模购买参数，标准版：DATA_MODEL_STANDARD，企业版：DATA_MODEL_PRO，默认DATA_MODEL_STANDARD
                     * 
                     */
                    std::string GetDataModelVersion() const;

                    /**
                     * 设置Wedata数据建模购买参数，标准版：DATA_MODEL_STANDARD，企业版：DATA_MODEL_PRO，默认DATA_MODEL_STANDARD
                     * @param _dataModelVersion Wedata数据建模购买参数，标准版：DATA_MODEL_STANDARD，企业版：DATA_MODEL_PRO，默认DATA_MODEL_STANDARD
                     * 
                     */
                    void SetDataModelVersion(const std::string& _dataModelVersion);

                    /**
                     * 判断参数 DataModelVersion 是否已赋值
                     * @return DataModelVersion 是否已赋值
                     * 
                     */
                    bool DataModelVersionHasBeenSet() const;

                private:

                    /**
                     * 云应用的实例id
                     */
                    std::string m_cloudappId;
                    bool m_cloudappIdHasBeenSet;

                    /**
                     * 用户的子账号id
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * Wedata数据建模购买参数，包年包月类型单位，年：y，月：m，默认m
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * Wedata数据建模购买参数，购买时长，默认1
                     */
                    int64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * Wedata数据建模购买参数，是否自动续费，是：1，否：0，默认0
                     */
                    uint64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * Wedata数据建模购买参数，标准版：DATA_MODEL_STANDARD，企业版：DATA_MODEL_PRO，默认DATA_MODEL_STANDARD
                     */
                    std::string m_dataModelVersion;
                    bool m_dataModelVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATEDATAMODELREQUEST_H_
