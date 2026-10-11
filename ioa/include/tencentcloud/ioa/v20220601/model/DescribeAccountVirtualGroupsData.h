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

#ifndef TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEACCOUNTVIRTUALGROUPSDATA_H_
#define TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEACCOUNTVIRTUALGROUPSDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ioa
    {
        namespace V20220601
        {
            namespace Model
            {
                /**
                * 列表账户虚拟组分页数据集
                */
                class DescribeAccountVirtualGroupsData : public AbstractModel
                {
                public:
                    DescribeAccountVirtualGroupsData();
                    ~DescribeAccountVirtualGroupsData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>id(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id <p>id(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置<p>id(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _id <p>id(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>分组id(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccountGroupId <p>分组id(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetAccountGroupId() const;

                    /**
                     * 设置<p>分组id(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accountGroupId <p>分组id(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAccountGroupId(const uint64_t& _accountGroupId);

                    /**
                     * 判断参数 AccountGroupId 是否已赋值
                     * @return AccountGroupId 是否已赋值
                     * 
                     */
                    bool AccountGroupIdHasBeenSet() const;

                    /**
                     * 获取<p>账户虚拟组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name <p>账户虚拟组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>账户虚拟组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name <p>账户虚拟组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description <p>描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description <p>描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>源类型，手动、自动(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceType <p>源类型，手动、自动(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSourceType() const;

                    /**
                     * 设置<p>源类型，手动、自动(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sourceType <p>源类型，手动、自动(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSourceType(const int64_t& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     * 
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取<p>扩展信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExtraInfo <p>扩展信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExtraInfo() const;

                    /**
                     * 设置<p>扩展信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _extraInfo <p>扩展信息</p>
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
                     * 获取<p>用户总数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserTotal <p>用户总数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetUserTotal() const;

                    /**
                     * 设置<p>用户总数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userTotal <p>用户总数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserTotal(const int64_t& _userTotal);

                    /**
                     * 判断参数 UserTotal 是否已赋值
                     * @return UserTotal 是否已赋值
                     * 
                     */
                    bool UserTotalHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Itime <p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetItime() const;

                    /**
                     * 设置<p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _itime <p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetItime(const std::string& _itime);

                    /**
                     * 判断参数 Itime 是否已赋值
                     * @return Itime 是否已赋值
                     * 
                     */
                    bool ItimeHasBeenSet() const;

                    /**
                     * 获取<p>最后更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Utime <p>最后更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUtime() const;

                    /**
                     * 设置<p>最后更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _utime <p>最后更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUtime(const std::string& _utime);

                    /**
                     * 判断参数 Utime 是否已赋值
                     * @return Utime 是否已赋值
                     * 
                     */
                    bool UtimeHasBeenSet() const;

                private:

                    /**
                     * <p>id(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>分组id(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_accountGroupId;
                    bool m_accountGroupIdHasBeenSet;

                    /**
                     * <p>账户虚拟组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>源类型，手动、自动(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * <p>扩展信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_extraInfo;
                    bool m_extraInfoHasBeenSet;

                    /**
                     * <p>用户总数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_userTotal;
                    bool m_userTotalHasBeenSet;

                    /**
                     * <p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_itime;
                    bool m_itimeHasBeenSet;

                    /**
                     * <p>最后更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_utime;
                    bool m_utimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEACCOUNTVIRTUALGROUPSDATA_H_
