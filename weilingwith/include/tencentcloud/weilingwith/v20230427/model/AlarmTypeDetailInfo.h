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

#ifndef TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_ALARMTYPEDETAILINFO_H_
#define TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_ALARMTYPEDETAILINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Weilingwith
    {
        namespace V20230427
        {
            namespace Model
            {
                /**
                * 告警类型详情信息
                */
                class AlarmTypeDetailInfo : public AbstractModel
                {
                public:
                    AlarmTypeDetailInfo();
                    ~AlarmTypeDetailInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取告警类型id
                     * @return Id 告警类型id
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置告警类型id
                     * @param _id 告警类型id
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
                     * 获取父节点id
                     * @return ParentId 父节点id
                     * 
                     */
                    int64_t GetParentId() const;

                    /**
                     * 设置父节点id
                     * @param _parentId 父节点id
                     * 
                     */
                    void SetParentId(const int64_t& _parentId);

                    /**
                     * 判断参数 ParentId 是否已赋值
                     * @return ParentId 是否已赋值
                     * 
                     */
                    bool ParentIdHasBeenSet() const;

                    /**
                     * 获取0-标准告警类型，1-自定义告警类型
                     * @return Type 0-标准告警类型，1-自定义告警类型
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置0-标准告警类型，1-自定义告警类型
                     * @param _type 0-标准告警类型，1-自定义告警类型
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取告警名称类型
                     * @return Name 告警名称类型
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置告警名称类型
                     * @param _name 告警名称类型
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
                     * 获取告警类型英文名称
                     * @return EnglishName 告警类型英文名称
                     * 
                     */
                    std::string GetEnglishName() const;

                    /**
                     * 设置告警类型英文名称
                     * @param _englishName 告警类型英文名称
                     * 
                     */
                    void SetEnglishName(const std::string& _englishName);

                    /**
                     * 判断参数 EnglishName 是否已赋值
                     * @return EnglishName 是否已赋值
                     * 
                     */
                    bool EnglishNameHasBeenSet() const;

                private:

                    /**
                     * 告警类型id
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 父节点id
                     */
                    int64_t m_parentId;
                    bool m_parentIdHasBeenSet;

                    /**
                     * 0-标准告警类型，1-自定义告警类型
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 告警名称类型
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 告警类型英文名称
                     */
                    std::string m_englishName;
                    bool m_englishNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_ALARMTYPEDETAILINFO_H_
