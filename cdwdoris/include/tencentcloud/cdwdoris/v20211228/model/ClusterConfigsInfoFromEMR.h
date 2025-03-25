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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_CLUSTERCONFIGSINFOFROMEMR_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_CLUSTERCONFIGSINFOFROMEMR_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwdoris/v20211228/model/ConfigKeyValue.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * 用于返回XML格式的配置文件和内容以及其他配置文件有关的信息
                */
                class ClusterConfigsInfoFromEMR : public AbstractModel
                {
                public:
                    ClusterConfigsInfoFromEMR();
                    ~ClusterConfigsInfoFromEMR() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取计算组id
                     * @return ComputeGroupId 计算组id
                     * 
                     */
                    std::string GetComputeGroupId() const;

                    /**
                     * 设置计算组id
                     * @param _computeGroupId 计算组id
                     * 
                     */
                    void SetComputeGroupId(const std::string& _computeGroupId);

                    /**
                     * 判断参数 ComputeGroupId 是否已赋值
                     * @return ComputeGroupId 是否已赋值
                     * 
                     */
                    bool ComputeGroupIdHasBeenSet() const;

                    /**
                     * 获取配置文件名称
                     * @return FileName 配置文件名称
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置配置文件名称
                     * @param _fileName 配置文件名称
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取配置文件对应的相关属性信息
                     * @return FileConf 配置文件对应的相关属性信息
                     * 
                     */
                    std::string GetFileConf() const;

                    /**
                     * 设置配置文件对应的相关属性信息
                     * @param _fileConf 配置文件对应的相关属性信息
                     * 
                     */
                    void SetFileConf(const std::string& _fileConf);

                    /**
                     * 判断参数 FileConf 是否已赋值
                     * @return FileConf 是否已赋值
                     * 
                     */
                    bool FileConfHasBeenSet() const;

                    /**
                     * 获取配置文件对应的其他属性信息
                     * @return KeyConf 配置文件对应的其他属性信息
                     * 
                     */
                    std::string GetKeyConf() const;

                    /**
                     * 设置配置文件对应的其他属性信息
                     * @param _keyConf 配置文件对应的其他属性信息
                     * 
                     */
                    void SetKeyConf(const std::string& _keyConf);

                    /**
                     * 判断参数 KeyConf 是否已赋值
                     * @return KeyConf 是否已赋值
                     * 
                     */
                    bool KeyConfHasBeenSet() const;

                    /**
                     * 获取配置文件的内容，base64编码
                     * @return OriParam 配置文件的内容，base64编码
                     * 
                     */
                    std::string GetOriParam() const;

                    /**
                     * 设置配置文件的内容，base64编码
                     * @param _oriParam 配置文件的内容，base64编码
                     * 
                     */
                    void SetOriParam(const std::string& _oriParam);

                    /**
                     * 判断参数 OriParam 是否已赋值
                     * @return OriParam 是否已赋值
                     * 
                     */
                    bool OriParamHasBeenSet() const;

                    /**
                     * 获取用于表示当前配置文件是不是有过修改后没有重启，提醒用户需要重启
                     * @return NeedRestart 用于表示当前配置文件是不是有过修改后没有重启，提醒用户需要重启
                     * 
                     */
                    int64_t GetNeedRestart() const;

                    /**
                     * 设置用于表示当前配置文件是不是有过修改后没有重启，提醒用户需要重启
                     * @param _needRestart 用于表示当前配置文件是不是有过修改后没有重启，提醒用户需要重启
                     * 
                     */
                    void SetNeedRestart(const int64_t& _needRestart);

                    /**
                     * 判断参数 NeedRestart 是否已赋值
                     * @return NeedRestart 是否已赋值
                     * 
                     */
                    bool NeedRestartHasBeenSet() const;

                    /**
                     * 获取配置文件路径
                     * @return FilePath 配置文件路径
                     * 
                     */
                    std::string GetFilePath() const;

                    /**
                     * 设置配置文件路径
                     * @param _filePath 配置文件路径
                     * 
                     */
                    void SetFilePath(const std::string& _filePath);

                    /**
                     * 判断参数 FilePath 是否已赋值
                     * @return FilePath 是否已赋值
                     * 
                     */
                    bool FilePathHasBeenSet() const;

                    /**
                     * 获取配置文件kv值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileKeyValues 配置文件kv值
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    std::string GetFileKeyValues() const;

                    /**
                     * 设置配置文件kv值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileKeyValues 配置文件kv值
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    void SetFileKeyValues(const std::string& _fileKeyValues);

                    /**
                     * 判断参数 FileKeyValues 是否已赋值
                     * @return FileKeyValues 是否已赋值
                     * @deprecated
                     */
                    bool FileKeyValuesHasBeenSet() const;

                    /**
                     * 获取配置文件kv值
                     * @return FileKeyValuesNew 配置文件kv值
                     * 
                     */
                    std::vector<ConfigKeyValue> GetFileKeyValuesNew() const;

                    /**
                     * 设置配置文件kv值
                     * @param _fileKeyValuesNew 配置文件kv值
                     * 
                     */
                    void SetFileKeyValuesNew(const std::vector<ConfigKeyValue>& _fileKeyValuesNew);

                    /**
                     * 判断参数 FileKeyValuesNew 是否已赋值
                     * @return FileKeyValuesNew 是否已赋值
                     * 
                     */
                    bool FileKeyValuesNewHasBeenSet() const;

                private:

                    /**
                     * 计算组id
                     */
                    std::string m_computeGroupId;
                    bool m_computeGroupIdHasBeenSet;

                    /**
                     * 配置文件名称
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 配置文件对应的相关属性信息
                     */
                    std::string m_fileConf;
                    bool m_fileConfHasBeenSet;

                    /**
                     * 配置文件对应的其他属性信息
                     */
                    std::string m_keyConf;
                    bool m_keyConfHasBeenSet;

                    /**
                     * 配置文件的内容，base64编码
                     */
                    std::string m_oriParam;
                    bool m_oriParamHasBeenSet;

                    /**
                     * 用于表示当前配置文件是不是有过修改后没有重启，提醒用户需要重启
                     */
                    int64_t m_needRestart;
                    bool m_needRestartHasBeenSet;

                    /**
                     * 配置文件路径
                     */
                    std::string m_filePath;
                    bool m_filePathHasBeenSet;

                    /**
                     * 配置文件kv值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fileKeyValues;
                    bool m_fileKeyValuesHasBeenSet;

                    /**
                     * 配置文件kv值
                     */
                    std::vector<ConfigKeyValue> m_fileKeyValuesNew;
                    bool m_fileKeyValuesNewHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_CLUSTERCONFIGSINFOFROMEMR_H_
