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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_CREATEALERTCENTERRULEREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_CREATEALERTCENTERRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * CreateAlertCenterRule请求参数结构体
                */
                class CreateAlertCenterRuleRequest : public AbstractModel
                {
                public:
                    CreateAlertCenterRuleRequest();
                    ~CreateAlertCenterRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取处置时间
1  1天
7   7天
-2 永久
                     * @return HandleTime 处置时间
1  1天
7   7天
-2 永久
                     * 
                     */
                    int64_t GetHandleTime() const;

                    /**
                     * 设置处置时间
1  1天
7   7天
-2 永久
                     * @param _handleTime 处置时间
1  1天
7   7天
-2 永久
                     * 
                     */
                    void SetHandleTime(const int64_t& _handleTime);

                    /**
                     * 判断参数 HandleTime 是否已赋值
                     * @return HandleTime 是否已赋值
                     * 
                     */
                    bool HandleTimeHasBeenSet() const;

                    /**
                     * 获取处置类型
当HandleIdList 不为空时：1封禁 2放通  
当HandleIpList 不为空时：3放通 4封禁
                     * @return HandleType 处置类型
当HandleIdList 不为空时：1封禁 2放通  
当HandleIpList 不为空时：3放通 4封禁
                     * 
                     */
                    int64_t GetHandleType() const;

                    /**
                     * 设置处置类型
当HandleIdList 不为空时：1封禁 2放通  
当HandleIpList 不为空时：3放通 4封禁
                     * @param _handleType 处置类型
当HandleIdList 不为空时：1封禁 2放通  
当HandleIpList 不为空时：3放通 4封禁
                     * 
                     */
                    void SetHandleType(const int64_t& _handleType);

                    /**
                     * 判断参数 HandleType 是否已赋值
                     * @return HandleType 是否已赋值
                     * 
                     */
                    bool HandleTypeHasBeenSet() const;

                    /**
                     * 获取当前日志方向： 0 出向 1 入向
                     * @return AlertDirection 当前日志方向： 0 出向 1 入向
                     * 
                     */
                    int64_t GetAlertDirection() const;

                    /**
                     * 设置当前日志方向： 0 出向 1 入向
                     * @param _alertDirection 当前日志方向： 0 出向 1 入向
                     * 
                     */
                    void SetAlertDirection(const int64_t& _alertDirection);

                    /**
                     * 判断参数 AlertDirection 是否已赋值
                     * @return AlertDirection 是否已赋值
                     * 
                     */
                    bool AlertDirectionHasBeenSet() const;

                    /**
                     * 获取处置方向： 0出向 1入向 0,1出入向 3内网
                     * @return HandleDirection 处置方向： 0出向 1入向 0,1出入向 3内网
                     * 
                     */
                    std::string GetHandleDirection() const;

                    /**
                     * 设置处置方向： 0出向 1入向 0,1出入向 3内网
                     * @param _handleDirection 处置方向： 0出向 1入向 0,1出入向 3内网
                     * 
                     */
                    void SetHandleDirection(const std::string& _handleDirection);

                    /**
                     * 判断参数 HandleDirection 是否已赋值
                     * @return HandleDirection 是否已赋值
                     * 
                     */
                    bool HandleDirectionHasBeenSet() const;

                    /**
                     * 获取处置对象,ID列表，  IdLists和IpList二选一
                     * @return HandleIdList 处置对象,ID列表，  IdLists和IpList二选一
                     * 
                     */
                    std::vector<std::string> GetHandleIdList() const;

                    /**
                     * 设置处置对象,ID列表，  IdLists和IpList二选一
                     * @param _handleIdList 处置对象,ID列表，  IdLists和IpList二选一
                     * 
                     */
                    void SetHandleIdList(const std::vector<std::string>& _handleIdList);

                    /**
                     * 判断参数 HandleIdList 是否已赋值
                     * @return HandleIdList 是否已赋值
                     * 
                     */
                    bool HandleIdListHasBeenSet() const;

                    /**
                     * 获取处置对象,IP列表，  IdLists和IpList二选一
                     * @return HandleIpList 处置对象,IP列表，  IdLists和IpList二选一
                     * 
                     */
                    std::vector<std::string> GetHandleIpList() const;

                    /**
                     * 设置处置对象,IP列表，  IdLists和IpList二选一
                     * @param _handleIpList 处置对象,IP列表，  IdLists和IpList二选一
                     * 
                     */
                    void SetHandleIpList(const std::vector<std::string>& _handleIpList);

                    /**
                     * 判断参数 HandleIpList 是否已赋值
                     * @return HandleIpList 是否已赋值
                     * 
                     */
                    bool HandleIpListHasBeenSet() const;

                    /**
                     * 获取处置描述
                     * @return HandleComment 处置描述
                     * 
                     */
                    std::string GetHandleComment() const;

                    /**
                     * 设置处置描述
                     * @param _handleComment 处置描述
                     * 
                     */
                    void SetHandleComment(const std::string& _handleComment);

                    /**
                     * 判断参数 HandleComment 是否已赋值
                     * @return HandleComment 是否已赋值
                     * 
                     */
                    bool HandleCommentHasBeenSet() const;

                    /**
                     * 获取放通原因:
0默认 1重复 2误报 3紧急放通
                     * @return IgnoreReason 放通原因:
0默认 1重复 2误报 3紧急放通
                     * 
                     */
                    int64_t GetIgnoreReason() const;

                    /**
                     * 设置放通原因:
0默认 1重复 2误报 3紧急放通
                     * @param _ignoreReason 放通原因:
0默认 1重复 2误报 3紧急放通
                     * 
                     */
                    void SetIgnoreReason(const int64_t& _ignoreReason);

                    /**
                     * 判断参数 IgnoreReason 是否已赋值
                     * @return IgnoreReason 是否已赋值
                     * 
                     */
                    bool IgnoreReasonHasBeenSet() const;

                    /**
                     * 获取封禁域名-保留字段
                     * @return BlockDomain 封禁域名-保留字段
                     * 
                     */
                    std::string GetBlockDomain() const;

                    /**
                     * 设置封禁域名-保留字段
                     * @param _blockDomain 封禁域名-保留字段
                     * 
                     */
                    void SetBlockDomain(const std::string& _blockDomain);

                    /**
                     * 判断参数 BlockDomain 是否已赋值
                     * @return BlockDomain 是否已赋值
                     * 
                     */
                    bool BlockDomainHasBeenSet() const;

                private:

                    /**
                     * 处置时间
1  1天
7   7天
-2 永久
                     */
                    int64_t m_handleTime;
                    bool m_handleTimeHasBeenSet;

                    /**
                     * 处置类型
当HandleIdList 不为空时：1封禁 2放通  
当HandleIpList 不为空时：3放通 4封禁
                     */
                    int64_t m_handleType;
                    bool m_handleTypeHasBeenSet;

                    /**
                     * 当前日志方向： 0 出向 1 入向
                     */
                    int64_t m_alertDirection;
                    bool m_alertDirectionHasBeenSet;

                    /**
                     * 处置方向： 0出向 1入向 0,1出入向 3内网
                     */
                    std::string m_handleDirection;
                    bool m_handleDirectionHasBeenSet;

                    /**
                     * 处置对象,ID列表，  IdLists和IpList二选一
                     */
                    std::vector<std::string> m_handleIdList;
                    bool m_handleIdListHasBeenSet;

                    /**
                     * 处置对象,IP列表，  IdLists和IpList二选一
                     */
                    std::vector<std::string> m_handleIpList;
                    bool m_handleIpListHasBeenSet;

                    /**
                     * 处置描述
                     */
                    std::string m_handleComment;
                    bool m_handleCommentHasBeenSet;

                    /**
                     * 放通原因:
0默认 1重复 2误报 3紧急放通
                     */
                    int64_t m_ignoreReason;
                    bool m_ignoreReasonHasBeenSet;

                    /**
                     * 封禁域名-保留字段
                     */
                    std::string m_blockDomain;
                    bool m_blockDomainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_CREATEALERTCENTERRULEREQUEST_H_
