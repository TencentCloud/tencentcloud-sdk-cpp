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

#ifndef TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_HANDLERECORDINFO_H_
#define TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_HANDLERECORDINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/weilingwith/v20230427/model/FileInfo.h>


namespace TencentCloud
{
    namespace Weilingwith
    {
        namespace V20230427
        {
            namespace Model
            {
                /**
                * 告警处理记录
                */
                class HandleRecordInfo : public AbstractModel
                {
                public:
                    HandleRecordInfo();
                    ~HandleRecordInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取告警处理记录id

                     * @return Id 告警处理记录id

                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置告警处理记录id

                     * @param _id 告警处理记录id

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
                     * 获取描述
                     * @return Description 描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述
                     * @param _description 描述
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
                     * 获取名称
                     * @return Name 名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置名称
                     * @param _name 名称
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
                     * 获取操作类型
                     * @return OperationType 操作类型
                     * 
                     */
                    std::string GetOperationType() const;

                    /**
                     * 设置操作类型
                     * @param _operationType 操作类型
                     * 
                     */
                    void SetOperationType(const std::string& _operationType);

                    /**
                     * 判断参数 OperationType 是否已赋值
                     * @return OperationType 是否已赋值
                     * 
                     */
                    bool OperationTypeHasBeenSet() const;

                    /**
                     * 获取处理时间
                     * @return Time 处理时间
                     * 
                     */
                    std::string GetTime() const;

                    /**
                     * 设置处理时间
                     * @param _time 处理时间
                     * 
                     */
                    void SetTime(const std::string& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取类型
                     * @return Type 类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置类型
                     * @param _type 类型
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取文件列表

                     * @return FileSet 文件列表

                     * 
                     */
                    std::vector<FileInfo> GetFileSet() const;

                    /**
                     * 设置文件列表

                     * @param _fileSet 文件列表

                     * 
                     */
                    void SetFileSet(const std::vector<FileInfo>& _fileSet);

                    /**
                     * 判断参数 FileSet 是否已赋值
                     * @return FileSet 是否已赋值
                     * 
                     */
                    bool FileSetHasBeenSet() const;

                    /**
                     * 获取应用appid
                     * @return AppId 应用appid
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置应用appid
                     * @param _appId 应用appid
                     * 
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取扩展字段1，存非孪生中台用户id

                     * @return ExtendOne 扩展字段1，存非孪生中台用户id

                     * 
                     */
                    std::string GetExtendOne() const;

                    /**
                     * 设置扩展字段1，存非孪生中台用户id

                     * @param _extendOne 扩展字段1，存非孪生中台用户id

                     * 
                     */
                    void SetExtendOne(const std::string& _extendOne);

                    /**
                     * 判断参数 ExtendOne 是否已赋值
                     * @return ExtendOne 是否已赋值
                     * 
                     */
                    bool ExtendOneHasBeenSet() const;

                private:

                    /**
                     * 告警处理记录id

                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 操作类型
                     */
                    std::string m_operationType;
                    bool m_operationTypeHasBeenSet;

                    /**
                     * 处理时间
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * 类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 文件列表

                     */
                    std::vector<FileInfo> m_fileSet;
                    bool m_fileSetHasBeenSet;

                    /**
                     * 应用appid
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 扩展字段1，存非孪生中台用户id

                     */
                    std::string m_extendOne;
                    bool m_extendOneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_HANDLERECORDINFO_H_
