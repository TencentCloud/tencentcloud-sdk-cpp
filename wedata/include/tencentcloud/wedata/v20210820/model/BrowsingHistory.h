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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_BROWSINGHISTORY_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_BROWSINGHISTORY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 数据开发浏览历史
                */
                class BrowsingHistory : public AbstractModel
                {
                public:
                    BrowsingHistory();
                    ~BrowsingHistory() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取名字
                     * @return Title 名字
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置名字
                     * @param _title 名字
                     * 
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取访问时间
                     * @return VisitTime 访问时间
                     * 
                     */
                    std::string GetVisitTime() const;

                    /**
                     * 设置访问时间
                     * @param _visitTime 访问时间
                     * 
                     */
                    void SetVisitTime(const std::string& _visitTime);

                    /**
                     * 判断参数 VisitTime 是否已赋值
                     * @return VisitTime 是否已赋值
                     * 
                     */
                    bool VisitTimeHasBeenSet() const;

                    /**
                     * 获取资源相关个性化信息，json格式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExtraInfo 资源相关个性化信息，json格式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExtraInfo() const;

                    /**
                     * 设置资源相关个性化信息，json格式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _extraInfo 资源相关个性化信息，json格式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExtraInfo(const std::string& _extraInfo);

                    /**
                     * 判断参数 ExtraInfo 是否已赋值
                     * @return ExtraInfo 是否已赋值
                     * 
                     */
                    bool ExtraInfoHasBeenSet() const;

                    /**
                     * 获取资源id
                     * @return ResourceType 资源id
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置资源id
                     * @param _resourceType 资源id
                     * 
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取查询历史的资源类型file/task/function/event等
                     * @return ResourceId 查询历史的资源类型file/task/function/event等
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置查询历史的资源类型file/task/function/event等
                     * @param _resourceId 查询历史的资源类型file/task/function/event等
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                private:

                    /**
                     * 名字
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * 访问时间
                     */
                    std::string m_visitTime;
                    bool m_visitTimeHasBeenSet;

                    /**
                     * 资源相关个性化信息，json格式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_extraInfo;
                    bool m_extraInfoHasBeenSet;

                    /**
                     * 资源id
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * 查询历史的资源类型file/task/function/event等
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_BROWSINGHISTORY_H_
