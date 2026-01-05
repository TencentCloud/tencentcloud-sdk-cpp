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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_PATCHINFODETAIL_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_PATCHINFODETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 补丁信息详情
                */
                class PatchInfoDetail : public AbstractModel
                {
                public:
                    PatchInfoDetail();
                    ~PatchInfoDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取KB编号
                     * @return KBNo KB编号
                     * 
                     */
                    std::string GetKBNo() const;

                    /**
                     * 设置KB编号
                     * @param _kBNo KB编号
                     * 
                     */
                    void SetKBNo(const std::string& _kBNo);

                    /**
                     * 判断参数 KBNo 是否已赋值
                     * @return KBNo 是否已赋值
                     * 
                     */
                    bool KBNoHasBeenSet() const;

                    /**
                     * 获取KB名称
                     * @return Name KB名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置KB名称
                     * @param _name KB名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取2025-05
                     * @return PublishTime 2025-05
                     * 
                     */
                    std::string GetPublishTime() const;

                    /**
                     * 设置2025-05
                     * @param _publishTime 2025-05
                     * 
                     */
                    void SetPublishTime(const std::string& _publishTime);

                    /**
                     * 判断参数 PublishTime 是否已赋值
                     * @return PublishTime 是否已赋值
                     * 
                     */
                    bool PublishTimeHasBeenSet() const;

                    /**
                     * 获取KB影响的漏洞
                     * @return RelatedCveId KB影响的漏洞
                     * 
                     */
                    std::vector<std::string> GetRelatedCveId() const;

                    /**
                     * 设置KB影响的漏洞
                     * @param _relatedCveId KB影响的漏洞
                     * 
                     */
                    void SetRelatedCveId(const std::vector<std::string>& _relatedCveId);

                    /**
                     * 判断参数 RelatedCveId 是否已赋值
                     * @return RelatedCveId 是否已赋值
                     * 
                     */
                    bool RelatedCveIdHasBeenSet() const;

                    /**
                     * 获取KB说明文档
                     * @return KbDocUrl KB说明文档
                     * 
                     */
                    std::string GetKbDocUrl() const;

                    /**
                     * 设置KB说明文档
                     * @param _kbDocUrl KB说明文档
                     * 
                     */
                    void SetKbDocUrl(const std::string& _kbDocUrl);

                    /**
                     * 判断参数 KbDocUrl 是否已赋值
                     * @return KbDocUrl 是否已赋值
                     * 
                     */
                    bool KbDocUrlHasBeenSet() const;

                    /**
                     * 获取KB id编号
                     * @return Id KB id编号
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置KB id编号
                     * @param _id KB id编号
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                private:

                    /**
                     * KB编号
                     */
                    std::string m_kBNo;
                    bool m_kBNoHasBeenSet;

                    /**
                     * KB名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 2025-05
                     */
                    std::string m_publishTime;
                    bool m_publishTimeHasBeenSet;

                    /**
                     * KB影响的漏洞
                     */
                    std::vector<std::string> m_relatedCveId;
                    bool m_relatedCveIdHasBeenSet;

                    /**
                     * KB说明文档
                     */
                    std::string m_kbDocUrl;
                    bool m_kbDocUrlHasBeenSet;

                    /**
                     * KB id编号
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_PATCHINFODETAIL_H_
