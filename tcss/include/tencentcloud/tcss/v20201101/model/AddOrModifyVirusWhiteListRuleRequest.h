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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_ADDORMODIFYVIRUSWHITELISTRULEREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_ADDORMODIFYVIRUSWHITELISTRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * AddOrModifyVirusWhiteListRule请求参数结构体
                */
                class AddOrModifyVirusWhiteListRuleRequest : public AbstractModel
                {
                public:
                    AddOrModifyVirusWhiteListRuleRequest();
                    ~AddOrModifyVirusWhiteListRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>MD5列表</p>
                     * @return Md5List <p>MD5列表</p>
                     * 
                     */
                    std::vector<std::string> GetMd5List() const;

                    /**
                     * 设置<p>MD5列表</p>
                     * @param _md5List <p>MD5列表</p>
                     * 
                     */
                    void SetMd5List(const std::vector<std::string>& _md5List);

                    /**
                     * 判断参数 Md5List 是否已赋值
                     * @return Md5List 是否已赋值
                     * 
                     */
                    bool Md5ListHasBeenSet() const;

                    /**
                     * 获取<p>生效范围：1=全部镜像，0=自选镜像</p>
                     * @return Scope <p>生效范围：1=全部镜像，0=自选镜像</p>
                     * 
                     */
                    uint64_t GetScope() const;

                    /**
                     * 设置<p>生效范围：1=全部镜像，0=自选镜像</p>
                     * @param _scope <p>生效范围：1=全部镜像，0=自选镜像</p>
                     * 
                     */
                    void SetScope(const uint64_t& _scope);

                    /**
                     * 判断参数 Scope 是否已赋值
                     * @return Scope 是否已赋值
                     * 
                     */
                    bool ScopeHasBeenSet() const;

                    /**
                     * 获取<p>规则ID，有值为修改，无值为新增</p>
                     * @return Id <p>规则ID，有值为修改，无值为新增</p>
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置<p>规则ID，有值为修改，无值为新增</p>
                     * @param _id <p>规则ID，有值为修改，无值为新增</p>
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>镜像ID列表，最大1000个。Scope为0（自选镜像）时必填</p>
                     * @return ImageIds <p>镜像ID列表，最大1000个。Scope为0（自选镜像）时必填</p>
                     * 
                     */
                    std::vector<std::string> GetImageIds() const;

                    /**
                     * 设置<p>镜像ID列表，最大1000个。Scope为0（自选镜像）时必填</p>
                     * @param _imageIds <p>镜像ID列表，最大1000个。Scope为0（自选镜像）时必填</p>
                     * 
                     */
                    void SetImageIds(const std::vector<std::string>& _imageIds);

                    /**
                     * 判断参数 ImageIds 是否已赋值
                     * @return ImageIds 是否已赋值
                     * 
                     */
                    bool ImageIdsHasBeenSet() const;

                    /**
                     * 获取<p>规则备注，最大256字符</p>
                     * @return Remark <p>规则备注，最大256字符</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>规则备注，最大256字符</p>
                     * @param _remark <p>规则备注，最大256字符</p>
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取<p>事件id</p>
                     * @return EventId <p>事件id</p>
                     * 
                     */
                    uint64_t GetEventId() const;

                    /**
                     * 设置<p>事件id</p>
                     * @param _eventId <p>事件id</p>
                     * 
                     */
                    void SetEventId(const uint64_t& _eventId);

                    /**
                     * 判断参数 EventId 是否已赋值
                     * @return EventId 是否已赋值
                     * 
                     */
                    bool EventIdHasBeenSet() const;

                private:

                    /**
                     * <p>MD5列表</p>
                     */
                    std::vector<std::string> m_md5List;
                    bool m_md5ListHasBeenSet;

                    /**
                     * <p>生效范围：1=全部镜像，0=自选镜像</p>
                     */
                    uint64_t m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * <p>规则ID，有值为修改，无值为新增</p>
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>镜像ID列表，最大1000个。Scope为0（自选镜像）时必填</p>
                     */
                    std::vector<std::string> m_imageIds;
                    bool m_imageIdsHasBeenSet;

                    /**
                     * <p>规则备注，最大256字符</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>事件id</p>
                     */
                    uint64_t m_eventId;
                    bool m_eventIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_ADDORMODIFYVIRUSWHITELISTRULEREQUEST_H_
