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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_VIOLATIONURL_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_VIOLATIONURL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * 违规 URL 详情
                */
                class ViolationUrl : public AbstractModel
                {
                public:
                    ViolationUrl();
                    ~ViolationUrl() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ID
                     * @return Id ID
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置ID
                     * @param _id ID
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取违规资源原始访问 URL
                     * @return RealUrl 违规资源原始访问 URL
                     * 
                     */
                    std::string GetRealUrl() const;

                    /**
                     * 设置违规资源原始访问 URL
                     * @param _realUrl 违规资源原始访问 URL
                     * 
                     */
                    void SetRealUrl(const std::string& _realUrl);

                    /**
                     * 判断参数 RealUrl 是否已赋值
                     * @return RealUrl 是否已赋值
                     * 
                     */
                    bool RealUrlHasBeenSet() const;

                    /**
                     * 获取快照路径，用于控制台展示违规内容快照
                     * @return DownloadUrl 快照路径，用于控制台展示违规内容快照
                     * 
                     */
                    std::string GetDownloadUrl() const;

                    /**
                     * 设置快照路径，用于控制台展示违规内容快照
                     * @param _downloadUrl 快照路径，用于控制台展示违规内容快照
                     * 
                     */
                    void SetDownloadUrl(const std::string& _downloadUrl);

                    /**
                     * 判断参数 DownloadUrl 是否已赋值
                     * @return DownloadUrl 是否已赋值
                     * 
                     */
                    bool DownloadUrlHasBeenSet() const;

                    /**
                     * 获取违规资源当前状态
forbid：已封禁
release：已解封
delay ： 延迟处理
reject ：申诉驳回，状态仍为封禁状态
complain：申诉进行中
                     * @return UrlStatus 违规资源当前状态
forbid：已封禁
release：已解封
delay ： 延迟处理
reject ：申诉驳回，状态仍为封禁状态
complain：申诉进行中
                     * 
                     */
                    std::string GetUrlStatus() const;

                    /**
                     * 设置违规资源当前状态
forbid：已封禁
release：已解封
delay ： 延迟处理
reject ：申诉驳回，状态仍为封禁状态
complain：申诉进行中
                     * @param _urlStatus 违规资源当前状态
forbid：已封禁
release：已解封
delay ： 延迟处理
reject ：申诉驳回，状态仍为封禁状态
complain：申诉进行中
                     * 
                     */
                    void SetUrlStatus(const std::string& _urlStatus);

                    /**
                     * 判断参数 UrlStatus 是否已赋值
                     * @return UrlStatus 是否已赋值
                     * 
                     */
                    bool UrlStatusHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return UpdateTime 更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
                     * @param _updateTime 更新时间
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * ID
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 违规资源原始访问 URL
                     */
                    std::string m_realUrl;
                    bool m_realUrlHasBeenSet;

                    /**
                     * 快照路径，用于控制台展示违规内容快照
                     */
                    std::string m_downloadUrl;
                    bool m_downloadUrlHasBeenSet;

                    /**
                     * 违规资源当前状态
forbid：已封禁
release：已解封
delay ： 延迟处理
reject ：申诉驳回，状态仍为封禁状态
complain：申诉进行中
                     */
                    std::string m_urlStatus;
                    bool m_urlStatusHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_VIOLATIONURL_H_
