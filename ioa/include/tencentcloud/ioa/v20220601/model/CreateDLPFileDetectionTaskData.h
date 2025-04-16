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

#ifndef TENCENTCLOUD_IOA_V20220601_MODEL_CREATEDLPFILEDETECTIONTASKDATA_H_
#define TENCENTCLOUD_IOA_V20220601_MODEL_CREATEDLPFILEDETECTIONTASKDATA_H_

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
                * 提交送检任务相应数据
                */
                class CreateDLPFileDetectionTaskData : public AbstractModel
                {
                public:
                    CreateDLPFileDetectionTaskData();
                    ~CreateDLPFileDetectionTaskData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取提交任务生成的id，也即requestID。用于后续查询
                     * @return DLPFileDetectionTaskID 提交任务生成的id，也即requestID。用于后续查询
                     * 
                     */
                    std::string GetDLPFileDetectionTaskID() const;

                    /**
                     * 设置提交任务生成的id，也即requestID。用于后续查询
                     * @param _dLPFileDetectionTaskID 提交任务生成的id，也即requestID。用于后续查询
                     * 
                     */
                    void SetDLPFileDetectionTaskID(const std::string& _dLPFileDetectionTaskID);

                    /**
                     * 判断参数 DLPFileDetectionTaskID 是否已赋值
                     * @return DLPFileDetectionTaskID 是否已赋值
                     * 
                     */
                    bool DLPFileDetectionTaskIDHasBeenSet() const;

                private:

                    /**
                     * 提交任务生成的id，也即requestID。用于后续查询
                     */
                    std::string m_dLPFileDetectionTaskID;
                    bool m_dLPFileDetectionTaskIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_CREATEDLPFILEDETECTIONTASKDATA_H_
