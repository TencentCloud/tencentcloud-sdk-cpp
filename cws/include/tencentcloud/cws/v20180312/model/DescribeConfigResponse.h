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

#ifndef TENCENTCLOUD_CWS_V20180312_MODEL_DESCRIBECONFIGRESPONSE_H_
#define TENCENTCLOUD_CWS_V20180312_MODEL_DESCRIBECONFIGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cws
    {
        namespace V20180312
        {
            namespace Model
            {
                /**
                * DescribeConfig返回参数结构体
                */
                class DescribeConfigResponse : public AbstractModel
                {
                public:
                    DescribeConfigResponse();
                    ~DescribeConfigResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取漏洞告警通知等级，4位分别代表：高危、中危、低危、提示。
                     * @return NoticeLevel 漏洞告警通知等级，4位分别代表：高危、中危、低危、提示。
                     * 
                     */
                    std::string GetNoticeLevel() const;

                    /**
                     * 判断参数 NoticeLevel 是否已赋值
                     * @return NoticeLevel 是否已赋值
                     * 
                     */
                    bool NoticeLevelHasBeenSet() const;

                    /**
                     * 获取配置ID。
                     * @return Id 配置ID。
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取记录创建时间。
                     * @return CreatedAt 记录创建时间。
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取记录更新新建。
                     * @return UpdatedAt 记录更新新建。
                     * 
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 判断参数 UpdatedAt 是否已赋值
                     * @return UpdatedAt 是否已赋值
                     * 
                     */
                    bool UpdatedAtHasBeenSet() const;

                    /**
                     * 获取云用户appid。
                     * @return Appid 云用户appid。
                     * 
                     */
                    uint64_t GetAppid() const;

                    /**
                     * 判断参数 Appid 是否已赋值
                     * @return Appid 是否已赋值
                     * 
                     */
                    bool AppidHasBeenSet() const;

                    /**
                     * 获取内容检测通知等级-1:通知,0-不通知
                     * @return ContentLevel 内容检测通知等级-1:通知,0-不通知
                     * 
                     */
                    uint64_t GetContentLevel() const;

                    /**
                     * 判断参数 ContentLevel 是否已赋值
                     * @return ContentLevel 是否已赋值
                     * 
                     */
                    bool ContentLevelHasBeenSet() const;

                private:

                    /**
                     * 漏洞告警通知等级，4位分别代表：高危、中危、低危、提示。
                     */
                    std::string m_noticeLevel;
                    bool m_noticeLevelHasBeenSet;

                    /**
                     * 配置ID。
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 记录创建时间。
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * 记录更新新建。
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                    /**
                     * 云用户appid。
                     */
                    uint64_t m_appid;
                    bool m_appidHasBeenSet;

                    /**
                     * 内容检测通知等级-1:通知,0-不通知
                     */
                    uint64_t m_contentLevel;
                    bool m_contentLevelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWS_V20180312_MODEL_DESCRIBECONFIGRESPONSE_H_
