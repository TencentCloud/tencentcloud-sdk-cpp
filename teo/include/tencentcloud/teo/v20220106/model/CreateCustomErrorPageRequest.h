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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_CREATECUSTOMERRORPAGEREQUEST_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_CREATECUSTOMERRORPAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * CreateCustomErrorPage请求参数结构体
                */
                class CreateCustomErrorPageRequest : public AbstractModel
                {
                public:
                    CreateCustomErrorPageRequest();
                    ~CreateCustomErrorPageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取zone的id
                     * @return ZoneId zone的id
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置zone的id
                     * @param ZoneId zone的id
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取具体所属实体
                     * @return Entity 具体所属实体
                     */
                    std::string GetEntity() const;

                    /**
                     * 设置具体所属实体
                     * @param Entity 具体所属实体
                     */
                    void SetEntity(const std::string& _entity);

                    /**
                     * 判断参数 Entity 是否已赋值
                     * @return Entity 是否已赋值
                     */
                    bool EntityHasBeenSet() const;

                    /**
                     * 获取自定义页面的文件名
                     * @return Name 自定义页面的文件名
                     */
                    std::string GetName() const;

                    /**
                     * 设置自定义页面的文件名
                     * @param Name 自定义页面的文件名
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取自定义页面的内容
                     * @return Content 自定义页面的内容
                     */
                    std::string GetContent() const;

                    /**
                     * 设置自定义页面的内容
                     * @param Content 自定义页面的内容
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     */
                    bool ContentHasBeenSet() const;

                private:

                    /**
                     * zone的id
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 具体所属实体
                     */
                    std::string m_entity;
                    bool m_entityHasBeenSet;

                    /**
                     * 自定义页面的文件名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 自定义页面的内容
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_CREATECUSTOMERRORPAGEREQUEST_H_
