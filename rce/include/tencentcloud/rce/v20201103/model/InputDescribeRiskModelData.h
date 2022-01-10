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

#ifndef TENCENTCLOUD_RCE_V20201103_MODEL_INPUTDESCRIBERISKMODELDATA_H_
#define TENCENTCLOUD_RCE_V20201103_MODEL_INPUTDESCRIBERISKMODELDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20201103
        {
            namespace Model
            {
                /**
                * 客户请求入参
                */
                class InputDescribeRiskModelData : public AbstractModel
                {
                public:
                    InputDescribeRiskModelData();
                    ~InputDescribeRiskModelData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取业务参数加密后的签名值
                     * @return UserData 业务参数加密后的签名值
                     */
                    std::string GetUserData() const;

                    /**
                     * 设置业务参数加密后的签名值
                     * @param UserData 业务参数加密后的签名值
                     */
                    void SetUserData(const std::string& _userData);

                    /**
                     * 判断参数 UserData 是否已赋值
                     * @return UserData 是否已赋值
                     */
                    bool UserDataHasBeenSet() const;

                    /**
                     * 获取调用时间戳，精确到秒
                     * @return ApplyDate 调用时间戳，精确到秒
                     */
                    uint64_t GetApplyDate() const;

                    /**
                     * 设置调用时间戳，精确到秒
                     * @param ApplyDate 调用时间戳，精确到秒
                     */
                    void SetApplyDate(const uint64_t& _applyDate);

                    /**
                     * 判断参数 ApplyDate 是否已赋值
                     * @return ApplyDate 是否已赋值
                     */
                    bool ApplyDateHasBeenSet() const;

                    /**
                     * 获取客户业务侧标识用户的唯一ID
                     * @return UserId 客户业务侧标识用户的唯一ID
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置客户业务侧标识用户的唯一ID
                     * @param UserId 客户业务侧标识用户的唯一ID
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取是否为测试流量
                     * @return IsTest 是否为测试流量
                     */
                    uint64_t GetIsTest() const;

                    /**
                     * 设置是否为测试流量
                     * @param IsTest 是否为测试流量
                     */
                    void SetIsTest(const uint64_t& _isTest);

                    /**
                     * 判断参数 IsTest 是否已赋值
                     * @return IsTest 是否已赋值
                     */
                    bool IsTestHasBeenSet() const;

                private:

                    /**
                     * 业务参数加密后的签名值
                     */
                    std::string m_userData;
                    bool m_userDataHasBeenSet;

                    /**
                     * 调用时间戳，精确到秒
                     */
                    uint64_t m_applyDate;
                    bool m_applyDateHasBeenSet;

                    /**
                     * 客户业务侧标识用户的唯一ID
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 是否为测试流量
                     */
                    uint64_t m_isTest;
                    bool m_isTestHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20201103_MODEL_INPUTDESCRIBERISKMODELDATA_H_
