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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_LISTATTACHEDUSERALLPOLICIESREQUEST_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_LISTATTACHEDUSERALLPOLICIESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * ListAttachedUserAllPolicies请求参数结构体
                */
                class ListAttachedUserAllPoliciesRequest : public AbstractModel
                {
                public:
                    ListAttachedUserAllPoliciesRequest();
                    ~ListAttachedUserAllPoliciesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取目标用户Uin
                     * @return TargetUin 目标用户Uin
                     * 
                     */
                    uint64_t GetTargetUin() const;

                    /**
                     * 设置目标用户Uin
                     * @param _targetUin 目标用户Uin
                     * 
                     */
                    void SetTargetUin(const uint64_t& _targetUin);

                    /**
                     * 判断参数 TargetUin 是否已赋值
                     * @return TargetUin 是否已赋值
                     * 
                     */
                    bool TargetUinHasBeenSet() const;

                    /**
                     * 获取每页数量，必须大于 0 且小于等于 200。
                     * @return Rp 每页数量，必须大于 0 且小于等于 200。
                     * 
                     */
                    uint64_t GetRp() const;

                    /**
                     * 设置每页数量，必须大于 0 且小于等于 200。
                     * @param _rp 每页数量，必须大于 0 且小于等于 200。
                     * 
                     */
                    void SetRp(const uint64_t& _rp);

                    /**
                     * 判断参数 Rp 是否已赋值
                     * @return Rp 是否已赋值
                     * 
                     */
                    bool RpHasBeenSet() const;

                    /**
                     * 获取页码，从 1开始，不能大于 200。
                     * @return Page 页码，从 1开始，不能大于 200。
                     * 
                     */
                    uint64_t GetPage() const;

                    /**
                     * 设置页码，从 1开始，不能大于 200。
                     * @param _page 页码，从 1开始，不能大于 200。
                     * 
                     */
                    void SetPage(const uint64_t& _page);

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     * 
                     */
                    bool PageHasBeenSet() const;

                    /**
                     * 获取关联类型。0:返回直接关联和随组关联策略，1:只返回直接关联策略，2:只返回随组关联策略。
                     * @return AttachType 关联类型。0:返回直接关联和随组关联策略，1:只返回直接关联策略，2:只返回随组关联策略。
                     * 
                     */
                    uint64_t GetAttachType() const;

                    /**
                     * 设置关联类型。0:返回直接关联和随组关联策略，1:只返回直接关联策略，2:只返回随组关联策略。
                     * @param _attachType 关联类型。0:返回直接关联和随组关联策略，1:只返回直接关联策略，2:只返回随组关联策略。
                     * 
                     */
                    void SetAttachType(const uint64_t& _attachType);

                    /**
                     * 判断参数 AttachType 是否已赋值
                     * @return AttachType 是否已赋值
                     * 
                     */
                    bool AttachTypeHasBeenSet() const;

                    /**
                     * 获取策略类型。1表示自定义策略，2表示预设策略。
                     * @return StrategyType 策略类型。1表示自定义策略，2表示预设策略。
                     * 
                     */
                    uint64_t GetStrategyType() const;

                    /**
                     * 设置策略类型。1表示自定义策略，2表示预设策略。
                     * @param _strategyType 策略类型。1表示自定义策略，2表示预设策略。
                     * 
                     */
                    void SetStrategyType(const uint64_t& _strategyType);

                    /**
                     * 判断参数 StrategyType 是否已赋值
                     * @return StrategyType 是否已赋值
                     * 
                     */
                    bool StrategyTypeHasBeenSet() const;

                    /**
                     * 获取搜索关键字
                     * @return Keyword 搜索关键字
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置搜索关键字
                     * @param _keyword 搜索关键字
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                private:

                    /**
                     * 目标用户Uin
                     */
                    uint64_t m_targetUin;
                    bool m_targetUinHasBeenSet;

                    /**
                     * 每页数量，必须大于 0 且小于等于 200。
                     */
                    uint64_t m_rp;
                    bool m_rpHasBeenSet;

                    /**
                     * 页码，从 1开始，不能大于 200。
                     */
                    uint64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * 关联类型。0:返回直接关联和随组关联策略，1:只返回直接关联策略，2:只返回随组关联策略。
                     */
                    uint64_t m_attachType;
                    bool m_attachTypeHasBeenSet;

                    /**
                     * 策略类型。1表示自定义策略，2表示预设策略。
                     */
                    uint64_t m_strategyType;
                    bool m_strategyTypeHasBeenSet;

                    /**
                     * 搜索关键字
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_LISTATTACHEDUSERALLPOLICIESREQUEST_H_
