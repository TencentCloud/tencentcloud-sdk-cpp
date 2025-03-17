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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_PREAUDITINFO_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_PREAUDITINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * 预审核信息列表
                */
                class PreAuditInfo : public AbstractModel
                {
                public:
                    PreAuditInfo();
                    ~PreAuditInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取证书总年限
                     * @return TotalPeriod 证书总年限
                     * 
                     */
                    int64_t GetTotalPeriod() const;

                    /**
                     * 设置证书总年限
                     * @param _totalPeriod 证书总年限
                     * 
                     */
                    void SetTotalPeriod(const int64_t& _totalPeriod);

                    /**
                     * 判断参数 TotalPeriod 是否已赋值
                     * @return TotalPeriod 是否已赋值
                     * 
                     */
                    bool TotalPeriodHasBeenSet() const;

                    /**
                     * 获取证书当前年限
                     * @return NowPeriod 证书当前年限
                     * 
                     */
                    int64_t GetNowPeriod() const;

                    /**
                     * 设置证书当前年限
                     * @param _nowPeriod 证书当前年限
                     * 
                     */
                    void SetNowPeriod(const int64_t& _nowPeriod);

                    /**
                     * 判断参数 NowPeriod 是否已赋值
                     * @return NowPeriod 是否已赋值
                     * 
                     */
                    bool NowPeriodHasBeenSet() const;

                    /**
                     * 获取证书预审核管理人ID
                     * @return ManagerId 证书预审核管理人ID
                     * 
                     */
                    std::string GetManagerId() const;

                    /**
                     * 设置证书预审核管理人ID
                     * @param _managerId 证书预审核管理人ID
                     * 
                     */
                    void SetManagerId(const std::string& _managerId);

                    /**
                     * 判断参数 ManagerId 是否已赋值
                     * @return ManagerId 是否已赋值
                     * 
                     */
                    bool ManagerIdHasBeenSet() const;

                private:

                    /**
                     * 证书总年限
                     */
                    int64_t m_totalPeriod;
                    bool m_totalPeriodHasBeenSet;

                    /**
                     * 证书当前年限
                     */
                    int64_t m_nowPeriod;
                    bool m_nowPeriodHasBeenSet;

                    /**
                     * 证书预审核管理人ID
                     */
                    std::string m_managerId;
                    bool m_managerIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_PREAUDITINFO_H_
