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

#ifndef TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_PROCESSRECORDINFO_H_
#define TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_PROCESSRECORDINFO_H_

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
                * 处理记录项
                */
                class ProcessRecordInfo : public AbstractModel
                {
                public:
                    ProcessRecordInfo();
                    ~ProcessRecordInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取告警的id
                     * @return Id 告警的id
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置告警的id
                     * @param _id 告警的id
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取处理时间，毫秒

                     * @return ProcessTime 处理时间，毫秒

                     * 
                     */
                    int64_t GetProcessTime() const;

                    /**
                     * 设置处理时间，毫秒

                     * @param _processTime 处理时间，毫秒

                     * 
                     */
                    void SetProcessTime(const int64_t& _processTime);

                    /**
                     * 判断参数 ProcessTime 是否已赋值
                     * @return ProcessTime 是否已赋值
                     * 
                     */
                    bool ProcessTimeHasBeenSet() const;

                    /**
                     * 获取处理类型，此处操作类型固定填add_record

                     * @return ProcessType 处理类型，此处操作类型固定填add_record

                     * 
                     */
                    std::string GetProcessType() const;

                    /**
                     * 设置处理类型，此处操作类型固定填add_record

                     * @param _processType 处理类型，此处操作类型固定填add_record

                     * 
                     */
                    void SetProcessType(const std::string& _processType);

                    /**
                     * 判断参数 ProcessType 是否已赋值
                     * @return ProcessType 是否已赋值
                     * 
                     */
                    bool ProcessTypeHasBeenSet() const;

                    /**
                     * 获取注:此字段填写的是孪生中台的用户，非孪生中台用户不填该字段
[{\"id\":\"123\",\"name\":\"tes\"}]

                     * @return Processor 注:此字段填写的是孪生中台的用户，非孪生中台用户不填该字段
[{\"id\":\"123\",\"name\":\"tes\"}]

                     * 
                     */
                    std::string GetProcessor() const;

                    /**
                     * 设置注:此字段填写的是孪生中台的用户，非孪生中台用户不填该字段
[{\"id\":\"123\",\"name\":\"tes\"}]

                     * @param _processor 注:此字段填写的是孪生中台的用户，非孪生中台用户不填该字段
[{\"id\":\"123\",\"name\":\"tes\"}]

                     * 
                     */
                    void SetProcessor(const std::string& _processor);

                    /**
                     * 判断参数 Processor 是否已赋值
                     * @return Processor 是否已赋值
                     * 
                     */
                    bool ProcessorHasBeenSet() const;

                    /**
                     * 获取处理描述信息
                     * @return ProcessDescription 处理描述信息
                     * 
                     */
                    std::string GetProcessDescription() const;

                    /**
                     * 设置处理描述信息
                     * @param _processDescription 处理描述信息
                     * 
                     */
                    void SetProcessDescription(const std::string& _processDescription);

                    /**
                     * 判断参数 ProcessDescription 是否已赋值
                     * @return ProcessDescription 是否已赋值
                     * 
                     */
                    bool ProcessDescriptionHasBeenSet() const;

                    /**
                     * 获取附加文件标识
                     * @return AttachedFileId 附加文件标识
                     * 
                     */
                    std::string GetAttachedFileId() const;

                    /**
                     * 设置附加文件标识
                     * @param _attachedFileId 附加文件标识
                     * 
                     */
                    void SetAttachedFileId(const std::string& _attachedFileId);

                    /**
                     * 判断参数 AttachedFileId 是否已赋值
                     * @return AttachedFileId 是否已赋值
                     * 
                     */
                    bool AttachedFileIdHasBeenSet() const;

                private:

                    /**
                     * 告警的id
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 处理时间，毫秒

                     */
                    int64_t m_processTime;
                    bool m_processTimeHasBeenSet;

                    /**
                     * 处理类型，此处操作类型固定填add_record

                     */
                    std::string m_processType;
                    bool m_processTypeHasBeenSet;

                    /**
                     * 注:此字段填写的是孪生中台的用户，非孪生中台用户不填该字段
[{\"id\":\"123\",\"name\":\"tes\"}]

                     */
                    std::string m_processor;
                    bool m_processorHasBeenSet;

                    /**
                     * 处理描述信息
                     */
                    std::string m_processDescription;
                    bool m_processDescriptionHasBeenSet;

                    /**
                     * 附加文件标识
                     */
                    std::string m_attachedFileId;
                    bool m_attachedFileIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_PROCESSRECORDINFO_H_
