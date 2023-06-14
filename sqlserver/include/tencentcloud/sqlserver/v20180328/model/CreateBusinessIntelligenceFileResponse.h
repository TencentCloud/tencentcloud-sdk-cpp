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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_CREATEBUSINESSINTELLIGENCEFILERESPONSE_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_CREATEBUSINESSINTELLIGENCEFILERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * CreateBusinessIntelligenceFile返回参数结构体
                */
                class CreateBusinessIntelligenceFileResponse : public AbstractModel
                {
                public:
                    CreateBusinessIntelligenceFileResponse();
                    ~CreateBusinessIntelligenceFileResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取文件名称
                     * @return FileTaskId 文件名称
                     * 
                     */
                    std::string GetFileTaskId() const;

                    /**
                     * 判断参数 FileTaskId 是否已赋值
                     * @return FileTaskId 是否已赋值
                     * 
                     */
                    bool FileTaskIdHasBeenSet() const;

                private:

                    /**
                     * 文件名称
                     */
                    std::string m_fileTaskId;
                    bool m_fileTaskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_CREATEBUSINESSINTELLIGENCEFILERESPONSE_H_
