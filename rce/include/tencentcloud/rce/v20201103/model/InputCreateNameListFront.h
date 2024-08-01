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

#ifndef TENCENTCLOUD_RCE_V20201103_MODEL_INPUTCREATENAMELISTFRONT_H_
#define TENCENTCLOUD_RCE_V20201103_MODEL_INPUTCREATENAMELISTFRONT_H_

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
                * 创建黑白名单入参
                */
                class InputCreateNameListFront : public AbstractModel
                {
                public:
                    InputCreateNameListFront();
                    ~InputCreateNameListFront() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取名单名称
                     * @return ListName 名单名称
                     * 
                     */
                    std::string GetListName() const;

                    /**
                     * 设置名单名称
                     * @param _listName 名单名称
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
                     * 获取名单类型 [1 黑名单 2白名单]
                     * @return ListType 名单类型 [1 黑名单 2白名单]
                     * 
                     */
                    int64_t GetListType() const;

                    /**
                     * 设置名单类型 [1 黑名单 2白名单]
                     * @param _listType 名单类型 [1 黑名单 2白名单]
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
                     * @return DataType 数据类型[1 手机号 2 qqOpenId 3 2echatOpenId 4 ip 6 idfa 7 imei]
                     * 
                     */
                    int64_t GetDataType() const;

                    /**
                     * 设置数据类型[1 手机号 2 qqOpenId 3 2echatOpenId 4 ip 6 idfa 7 imei]
                     * @param _dataType 数据类型[1 手机号 2 qqOpenId 3 2echatOpenId 4 ip 6 idfa 7 imei]
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
                     * 获取描述
                     * @return Remark 描述
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置描述
                     * @param _remark 描述
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
                     * 获取加密类型[0 无需加密 1 MD5加密 2 SHA256加密]
                     * @return EncryptionType 加密类型[0 无需加密 1 MD5加密 2 SHA256加密]
                     * 
                     */
                    int64_t GetEncryptionType() const;

                    /**
                     * 设置加密类型[0 无需加密 1 MD5加密 2 SHA256加密]
                     * @param _encryptionType 加密类型[0 无需加密 1 MD5加密 2 SHA256加密]
                     * 
                     */
                    void SetEncryptionType(const int64_t& _encryptionType);

                    /**
                     * 判断参数 EncryptionType 是否已赋值
                     * @return EncryptionType 是否已赋值
                     * 
                     */
                    bool EncryptionTypeHasBeenSet() const;

                    /**
                     * 获取场景Code，all_scene代表全部场景
                     * @return SceneCode 场景Code，all_scene代表全部场景
                     * 
                     */
                    std::string GetSceneCode() const;

                    /**
                     * 设置场景Code，all_scene代表全部场景
                     * @param _sceneCode 场景Code，all_scene代表全部场景
                     * 
                     */
                    void SetSceneCode(const std::string& _sceneCode);

                    /**
                     * 判断参数 SceneCode 是否已赋值
                     * @return SceneCode 是否已赋值
                     * 
                     */
                    bool SceneCodeHasBeenSet() const;

                private:

                    /**
                     * 名单名称
                     */
                    std::string m_listName;
                    bool m_listNameHasBeenSet;

                    /**
                     * 名单类型 [1 黑名单 2白名单]
                     */
                    int64_t m_listType;
                    bool m_listTypeHasBeenSet;

                    /**
                     * 数据类型[1 手机号 2 qqOpenId 3 2echatOpenId 4 ip 6 idfa 7 imei]
                     */
                    int64_t m_dataType;
                    bool m_dataTypeHasBeenSet;

                    /**
                     * 描述
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 加密类型[0 无需加密 1 MD5加密 2 SHA256加密]
                     */
                    int64_t m_encryptionType;
                    bool m_encryptionTypeHasBeenSet;

                    /**
                     * 场景Code，all_scene代表全部场景
                     */
                    std::string m_sceneCode;
                    bool m_sceneCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20201103_MODEL_INPUTCREATENAMELISTFRONT_H_
