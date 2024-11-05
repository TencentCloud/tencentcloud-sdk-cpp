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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_LINEGROUPITEM_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_LINEGROUPITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dnspod
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * 自定义线路分组元素
                */
                class LineGroupItem : public AbstractModel
                {
                public:
                    LineGroupItem();
                    ~LineGroupItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取域名ID
                     * @return DomainId 域名ID
                     * 
                     */
                    uint64_t GetDomainId() const;

                    /**
                     * 设置域名ID
                     * @param _domainId 域名ID
                     * 
                     */
                    void SetDomainId(const uint64_t& _domainId);

                    /**
                     * 判断参数 DomainId 是否已赋值
                     * @return DomainId 是否已赋值
                     * 
                     */
                    bool DomainIdHasBeenSet() const;

                    /**
                     * 获取自定义线路分组ID
                     * @return Id 自定义线路分组ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置自定义线路分组ID
                     * @param _id 自定义线路分组ID
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
                     * 获取自定义线路分组名称
                     * @return Name 自定义线路分组名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置自定义线路分组名称
                     * @param _name 自定义线路分组名称
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
                     * 获取自定义线路分组包含的线路
                     * @return Lines 自定义线路分组包含的线路
                     * 
                     */
                    std::vector<std::string> GetLines() const;

                    /**
                     * 设置自定义线路分组包含的线路
                     * @param _lines 自定义线路分组包含的线路
                     * 
                     */
                    void SetLines(const std::vector<std::string>& _lines);

                    /**
                     * 判断参数 Lines 是否已赋值
                     * @return Lines 是否已赋值
                     * 
                     */
                    bool LinesHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreatedOn 创建时间
                     * 
                     */
                    std::string GetCreatedOn() const;

                    /**
                     * 设置创建时间
                     * @param _createdOn 创建时间
                     * 
                     */
                    void SetCreatedOn(const std::string& _createdOn);

                    /**
                     * 判断参数 CreatedOn 是否已赋值
                     * @return CreatedOn 是否已赋值
                     * 
                     */
                    bool CreatedOnHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return UpdatedOn 更新时间
                     * 
                     */
                    std::string GetUpdatedOn() const;

                    /**
                     * 设置更新时间
                     * @param _updatedOn 更新时间
                     * 
                     */
                    void SetUpdatedOn(const std::string& _updatedOn);

                    /**
                     * 判断参数 UpdatedOn 是否已赋值
                     * @return UpdatedOn 是否已赋值
                     * 
                     */
                    bool UpdatedOnHasBeenSet() const;

                private:

                    /**
                     * 域名ID
                     */
                    uint64_t m_domainId;
                    bool m_domainIdHasBeenSet;

                    /**
                     * 自定义线路分组ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 自定义线路分组名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 自定义线路分组包含的线路
                     */
                    std::vector<std::string> m_lines;
                    bool m_linesHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createdOn;
                    bool m_createdOnHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updatedOn;
                    bool m_updatedOnHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_LINEGROUPITEM_H_
