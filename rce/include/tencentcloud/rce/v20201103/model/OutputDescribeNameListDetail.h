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

#ifndef TENCENTCLOUD_RCE_V20201103_MODEL_OUTPUTDESCRIBENAMELISTDETAIL_H_
#define TENCENTCLOUD_RCE_V20201103_MODEL_OUTPUTDESCRIBENAMELISTDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20201103
        {
            namespace Model
            {
                /**
                * 黑白名单详情出参
                */
                class OutputDescribeNameListDetail : public AbstractModel
                {
                public:
                    OutputDescribeNameListDetail();
                    ~OutputDescribeNameListDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取名单ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NameListId 名单ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetNameListId() const;

                    /**
                     * 设置名单ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nameListId 名单ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNameListId(const int64_t& _nameListId);

                    /**
                     * 判断参数 NameListId 是否已赋值
                     * @return NameListId 是否已赋值
                     * 
                     */
                    bool NameListIdHasBeenSet() const;

                    /**
                     * 获取名单名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ListName 名单名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetListName() const;

                    /**
                     * 设置名单名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _listName 名单名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetListName(const std::string& _listName);

                    /**
                     * 判断参数 ListName 是否已赋值
                     * @return ListName 是否已赋值
                     * 
                     */
                    bool ListNameHasBeenSet() const;

                    /**
                     * 获取名单类型 [1 黑名单 2 白名单]
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ListType 名单类型 [1 黑名单 2 白名单]
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetListType() const;

                    /**
                     * 设置名单类型 [1 黑名单 2 白名单]
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _listType 名单类型 [1 黑名单 2 白名单]
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetListType(const int64_t& _listType);

                    /**
                     * 判断参数 ListType 是否已赋值
                     * @return ListType 是否已赋值
                     * 
                     */
                    bool ListTypeHasBeenSet() const;

                    /**
                     * 获取数据类型[1 手机号 2 qqOpenId 3 2echatOpenId 4 ip 6 idfa 7 imei]
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataType 数据类型[1 手机号 2 qqOpenId 3 2echatOpenId 4 ip 6 idfa 7 imei]
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDataType() const;

                    /**
                     * 设置数据类型[1 手机号 2 qqOpenId 3 2echatOpenId 4 ip 6 idfa 7 imei]
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataType 数据类型[1 手机号 2 qqOpenId 3 2echatOpenId 4 ip 6 idfa 7 imei]
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDataType(const int64_t& _dataType);

                    /**
                     * 判断参数 DataType 是否已赋值
                     * @return DataType 是否已赋值
                     * 
                     */
                    bool DataTypeHasBeenSet() const;

                    /**
                     * 获取场景Code
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SceneCode 场景Code
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSceneCode() const;

                    /**
                     * 设置场景Code
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sceneCode 场景Code
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSceneCode(const std::string& _sceneCode);

                    /**
                     * 判断参数 SceneCode 是否已赋值
                     * @return SceneCode 是否已赋值
                     * 
                     */
                    bool SceneCodeHasBeenSet() const;

                    /**
                     * 获取名单列表状态 [1 启用 2 停用]
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 名单列表状态 [1 启用 2 停用]
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置名单列表状态 [1 启用 2 停用]
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 名单列表状态 [1 启用 2 停用]
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Remark 描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _remark 描述
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取创建时间，时间格式示例"2024-05-05 12:10:15"
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间，时间格式示例"2024-05-05 12:10:15"
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间，时间格式示例"2024-05-05 12:10:15"
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 创建时间，时间格式示例"2024-05-05 12:10:15"
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取更新时间，时间格式示例"2024-05-05 12:10:15"
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 更新时间，时间格式示例"2024-05-05 12:10:15"
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间，时间格式示例"2024-05-05 12:10:15"
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime 更新时间，时间格式示例"2024-05-05 12:10:15"
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取加密类型 [0 无需加密，1 MD5加密，2 SHA256加密]
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EncryptionType 加密类型 [0 无需加密，1 MD5加密，2 SHA256加密]
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetEncryptionType() const;

                    /**
                     * 设置加密类型 [0 无需加密，1 MD5加密，2 SHA256加密]
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _encryptionType 加密类型 [0 无需加密，1 MD5加密，2 SHA256加密]
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEncryptionType(const int64_t& _encryptionType);

                    /**
                     * 判断参数 EncryptionType 是否已赋值
                     * @return EncryptionType 是否已赋值
                     * 
                     */
                    bool EncryptionTypeHasBeenSet() const;

                private:

                    /**
                     * 名单ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_nameListId;
                    bool m_nameListIdHasBeenSet;

                    /**
                     * 名单名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_listName;
                    bool m_listNameHasBeenSet;

                    /**
                     * 名单类型 [1 黑名单 2 白名单]
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_listType;
                    bool m_listTypeHasBeenSet;

                    /**
                     * 数据类型[1 手机号 2 qqOpenId 3 2echatOpenId 4 ip 6 idfa 7 imei]
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_dataType;
                    bool m_dataTypeHasBeenSet;

                    /**
                     * 场景Code
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sceneCode;
                    bool m_sceneCodeHasBeenSet;

                    /**
                     * 名单列表状态 [1 启用 2 停用]
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 创建时间，时间格式示例"2024-05-05 12:10:15"
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间，时间格式示例"2024-05-05 12:10:15"
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 加密类型 [0 无需加密，1 MD5加密，2 SHA256加密]
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_encryptionType;
                    bool m_encryptionTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20201103_MODEL_OUTPUTDESCRIBENAMELISTDETAIL_H_
