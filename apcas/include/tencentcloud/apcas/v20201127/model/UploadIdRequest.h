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

#ifndef TENCENTCLOUD_APCAS_V20201127_MODEL_UPLOADIDREQUEST_H_
#define TENCENTCLOUD_APCAS_V20201127_MODEL_UPLOADIDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apcas
    {
        namespace V20201127
        {
            namespace Model
            {
                /**
                * UploadId请求参数结构体
                */
                class UploadIdRequest : public AbstractModel
                {
                public:
                    UploadIdRequest();
                    ~UploadIdRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取id标志的类型: 0:imei 7:IDFA 8:MD5(imei)
                     * @return Type id标志的类型: 0:imei 7:IDFA 8:MD5(imei)
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置id标志的类型: 0:imei 7:IDFA 8:MD5(imei)
                     * @param _type id标志的类型: 0:imei 7:IDFA 8:MD5(imei)
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取任务名称
                     * @return TaskName 任务名称
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置任务名称
                     * @param _taskName 任务名称
                     * 
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取ID列表（ID间使用换行符分割、然后使用Base64编码）
                     * @return IdListBase64 ID列表（ID间使用换行符分割、然后使用Base64编码）
                     * 
                     */
                    std::string GetIdListBase64() const;

                    /**
                     * 设置ID列表（ID间使用换行符分割、然后使用Base64编码）
                     * @param _idListBase64 ID列表（ID间使用换行符分割、然后使用Base64编码）
                     * 
                     */
                    void SetIdListBase64(const std::string& _idListBase64);

                    /**
                     * 判断参数 IdListBase64 是否已赋值
                     * @return IdListBase64 是否已赋值
                     * 
                     */
                    bool IdListBase64HasBeenSet() const;

                private:

                    /**
                     * id标志的类型: 0:imei 7:IDFA 8:MD5(imei)
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 任务名称
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * ID列表（ID间使用换行符分割、然后使用Base64编码）
                     */
                    std::string m_idListBase64;
                    bool m_idListBase64HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APCAS_V20201127_MODEL_UPLOADIDREQUEST_H_
