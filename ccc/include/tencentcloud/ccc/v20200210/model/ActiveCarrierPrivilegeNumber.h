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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_ACTIVECARRIERPRIVILEGENUMBER_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_ACTIVECARRIERPRIVILEGENUMBER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * 生效运营商白名单号码
                */
                class ActiveCarrierPrivilegeNumber : public AbstractModel
                {
                public:
                    ActiveCarrierPrivilegeNumber();
                    ~ActiveCarrierPrivilegeNumber() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例Id
                     * @return SdkAppId 实例Id
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置实例Id
                     * @param _sdkAppId 实例Id
                     * 
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取主叫号码
                     * @return Caller 主叫号码
                     * 
                     */
                    std::string GetCaller() const;

                    /**
                     * 设置主叫号码
                     * @param _caller 主叫号码
                     * 
                     */
                    void SetCaller(const std::string& _caller);

                    /**
                     * 判断参数 Caller 是否已赋值
                     * @return Caller 是否已赋值
                     * 
                     */
                    bool CallerHasBeenSet() const;

                    /**
                     * 获取被叫号码
                     * @return Callee 被叫号码
                     * 
                     */
                    std::string GetCallee() const;

                    /**
                     * 设置被叫号码
                     * @param _callee 被叫号码
                     * 
                     */
                    void SetCallee(const std::string& _callee);

                    /**
                     * 判断参数 Callee 是否已赋值
                     * @return Callee 是否已赋值
                     * 
                     */
                    bool CalleeHasBeenSet() const;

                    /**
                     * 获取生效unix时间戳(秒)
                     * @return CreateTime 生效unix时间戳(秒)
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置生效unix时间戳(秒)
                     * @param _createTime 生效unix时间戳(秒)
                     * 
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * 实例Id
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 主叫号码
                     */
                    std::string m_caller;
                    bool m_callerHasBeenSet;

                    /**
                     * 被叫号码
                     */
                    std::string m_callee;
                    bool m_calleeHasBeenSet;

                    /**
                     * 生效unix时间戳(秒)
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_ACTIVECARRIERPRIVILEGENUMBER_H_
