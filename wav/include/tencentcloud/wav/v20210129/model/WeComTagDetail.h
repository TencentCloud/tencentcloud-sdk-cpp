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

#ifndef TENCENTCLOUD_WAV_V20210129_MODEL_WECOMTAGDETAIL_H_
#define TENCENTCLOUD_WAV_V20210129_MODEL_WECOMTAGDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wav
    {
        namespace V20210129
        {
            namespace Model
            {
                /**
                * 企微个人标签信息,渠道活码使用
                */
                class WeComTagDetail : public AbstractModel
                {
                public:
                    WeComTagDetail();
                    ~WeComTagDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取标签分组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupName 标签分组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置标签分组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _groupName 标签分组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取标签分组业务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BizGroupId 标签分组业务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBizGroupId() const;

                    /**
                     * 设置标签分组业务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bizGroupId 标签分组业务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBizGroupId(const std::string& _bizGroupId);

                    /**
                     * 判断参数 BizGroupId 是否已赋值
                     * @return BizGroupId 是否已赋值
                     * 
                     */
                    bool BizGroupIdHasBeenSet() const;

                    /**
                     * 获取标签名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TagName 标签名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTagName() const;

                    /**
                     * 设置标签名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tagName 标签名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTagName(const std::string& _tagName);

                    /**
                     * 判断参数 TagName 是否已赋值
                     * @return TagName 是否已赋值
                     * 
                     */
                    bool TagNameHasBeenSet() const;

                    /**
                     * 获取标签ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TagId 标签ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTagId() const;

                    /**
                     * 设置标签ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tagId 标签ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTagId(const std::string& _tagId);

                    /**
                     * 判断参数 TagId 是否已赋值
                     * @return TagId 是否已赋值
                     * 
                     */
                    bool TagIdHasBeenSet() const;

                    /**
                     * 获取标签业务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BizTagId 标签业务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBizTagId() const;

                    /**
                     * 设置标签业务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bizTagId 标签业务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBizTagId(const std::string& _bizTagId);

                    /**
                     * 判断参数 BizTagId 是否已赋值
                     * @return BizTagId 是否已赋值
                     * 
                     */
                    bool BizTagIdHasBeenSet() const;

                    /**
                     * 获取标签分类，1：企业设置、2：用户自定义
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 标签分类，1：企业设置、2：用户自定义
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置标签分类，1：企业设置、2：用户自定义
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type 标签分类，1：企业设置、2：用户自定义
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取标签业务ID字符串格式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BizTagIdStr 标签业务ID字符串格式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBizTagIdStr() const;

                    /**
                     * 设置标签业务ID字符串格式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bizTagIdStr 标签业务ID字符串格式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBizTagIdStr(const std::string& _bizTagIdStr);

                    /**
                     * 判断参数 BizTagIdStr 是否已赋值
                     * @return BizTagIdStr 是否已赋值
                     * 
                     */
                    bool BizTagIdStrHasBeenSet() const;

                private:

                    /**
                     * 标签分组名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 标签分组业务ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bizGroupId;
                    bool m_bizGroupIdHasBeenSet;

                    /**
                     * 标签名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tagName;
                    bool m_tagNameHasBeenSet;

                    /**
                     * 标签ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tagId;
                    bool m_tagIdHasBeenSet;

                    /**
                     * 标签业务ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bizTagId;
                    bool m_bizTagIdHasBeenSet;

                    /**
                     * 标签分类，1：企业设置、2：用户自定义
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 标签业务ID字符串格式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bizTagIdStr;
                    bool m_bizTagIdStrHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAV_V20210129_MODEL_WECOMTAGDETAIL_H_
