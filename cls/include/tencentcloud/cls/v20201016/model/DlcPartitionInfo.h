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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DLCPARTITIONINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DLCPARTITIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * 数据湖计算服务（Data Lake Compute，简称DLC）数据分区配置
                */
                class DlcPartitionInfo : public AbstractModel
                {
                public:
                    DlcPartitionInfo();
                    ~DlcPartitionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取cls日志中的字段名
                     * @return ClsField cls日志中的字段名
                     * 
                     */
                    std::string GetClsField() const;

                    /**
                     * 设置cls日志中的字段名
                     * @param _clsField cls日志中的字段名
                     * 
                     */
                    void SetClsField(const std::string& _clsField);

                    /**
                     * 判断参数 ClsField 是否已赋值
                     * @return ClsField 是否已赋值
                     * 
                     */
                    bool ClsFieldHasBeenSet() const;

                    /**
                     * 获取dlc表的列名
                     * @return DlcField dlc表的列名
                     * 
                     */
                    std::string GetDlcField() const;

                    /**
                     * 设置dlc表的列名
                     * @param _dlcField dlc表的列名
                     * 
                     */
                    void SetDlcField(const std::string& _dlcField);

                    /**
                     * 判断参数 DlcField 是否已赋值
                     * @return DlcField 是否已赋值
                     * 
                     */
                    bool DlcFieldHasBeenSet() const;

                    /**
                     * 获取dlc字段类型
                     * @return DlcFieldType dlc字段类型
                     * 
                     */
                    std::string GetDlcFieldType() const;

                    /**
                     * 设置dlc字段类型
                     * @param _dlcFieldType dlc字段类型
                     * 
                     */
                    void SetDlcFieldType(const std::string& _dlcFieldType);

                    /**
                     * 判断参数 DlcFieldType 是否已赋值
                     * @return DlcFieldType 是否已赋值
                     * 
                     */
                    bool DlcFieldTypeHasBeenSet() const;

                private:

                    /**
                     * cls日志中的字段名
                     */
                    std::string m_clsField;
                    bool m_clsFieldHasBeenSet;

                    /**
                     * dlc表的列名
                     */
                    std::string m_dlcField;
                    bool m_dlcFieldHasBeenSet;

                    /**
                     * dlc字段类型
                     */
                    std::string m_dlcFieldType;
                    bool m_dlcFieldTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DLCPARTITIONINFO_H_
