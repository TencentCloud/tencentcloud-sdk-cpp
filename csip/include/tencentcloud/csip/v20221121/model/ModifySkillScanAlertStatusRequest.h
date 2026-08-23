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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYSKILLSCANALERTSTATUSREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYSKILLSCANALERTSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * ModifySkillScanAlertStatus请求参数结构体
                */
                class ModifySkillScanAlertStatusRequest : public AbstractModel
                {
                public:
                    ModifySkillScanAlertStatusRequest();
                    ~ModifySkillScanAlertStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取告警记录 ID 列表
入参限制：单次最多 100 个
取值参考：通过 DescribeSkillScanAlertList 接口获取
                     * @return IDs 告警记录 ID 列表
入参限制：单次最多 100 个
取值参考：通过 DescribeSkillScanAlertList 接口获取
                     * 
                     */
                    std::vector<int64_t> GetIDs() const;

                    /**
                     * 设置告警记录 ID 列表
入参限制：单次最多 100 个
取值参考：通过 DescribeSkillScanAlertList 接口获取
                     * @param _iDs 告警记录 ID 列表
入参限制：单次最多 100 个
取值参考：通过 DescribeSkillScanAlertList 接口获取
                     * 
                     */
                    void SetIDs(const std::vector<int64_t>& _iDs);

                    /**
                     * 判断参数 IDs 是否已赋值
                     * @return IDs 是否已赋值
                     * 
                     */
                    bool IDsHasBeenSet() const;

                    /**
                     * 获取目标处理状态
枚举值：
1：已处理
2：已忽略
3：已信任
4：已删除（软删除）
                     * @return Status 目标处理状态
枚举值：
1：已处理
2：已忽略
3：已信任
4：已删除（软删除）
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置目标处理状态
枚举值：
1：已处理
2：已忽略
3：已信任
4：已删除（软删除）
                     * @param _status 目标处理状态
枚举值：
1：已处理
2：已忽略
3：已信任
4：已删除（软删除）
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取集团账号的成员 id
                     * @return MemberId 集团账号的成员 id
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置集团账号的成员 id
                     * @param _memberId 集团账号的成员 id
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                private:

                    /**
                     * 告警记录 ID 列表
入参限制：单次最多 100 个
取值参考：通过 DescribeSkillScanAlertList 接口获取
                     */
                    std::vector<int64_t> m_iDs;
                    bool m_iDsHasBeenSet;

                    /**
                     * 目标处理状态
枚举值：
1：已处理
2：已忽略
3：已信任
4：已删除（软删除）
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 集团账号的成员 id
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYSKILLSCANALERTSTATUSREQUEST_H_
