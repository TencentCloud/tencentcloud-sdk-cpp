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

#ifndef TENCENTCLOUD_TICS_V20181115_MODEL_DESCRIBEFILEINFORESPONSE_H_
#define TENCENTCLOUD_TICS_V20181115_MODEL_DESCRIBEFILEINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tics/v20181115/model/FileInfoType.h>
#include <tencentcloud/tics/v20181115/model/TagType.h>
#include <tencentcloud/tics/v20181115/model/IntelligenceType.h>


namespace TencentCloud
{
    namespace Tics
    {
        namespace V20181115
        {
            namespace Model
            {
                /**
                * DescribeFileInfo返回参数结构体
                */
                class DescribeFileInfoResponse : public AbstractModel
                {
                public:
                    DescribeFileInfoResponse();
                    ~DescribeFileInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取是否有数据，0代表有数据，1代表没有数据
                     * @return ReturnCode 是否有数据，0代表有数据，1代表没有数据
                     * 
                     */
                    uint64_t GetReturnCode() const;

                    /**
                     * 判断参数 ReturnCode 是否已赋值
                     * @return ReturnCode 是否已赋值
                     * 
                     */
                    bool ReturnCodeHasBeenSet() const;

                    /**
                     * 获取判定结果，如：black、white、grey
                     * @return Result 判定结果，如：black、white、grey
                     * 
                     */
                    std::string GetResult() const;

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取置信度，取值0-100
                     * @return Confidence 置信度，取值0-100
                     * 
                     */
                    uint64_t GetConfidence() const;

                    /**
                     * 判断参数 Confidence 是否已赋值
                     * @return Confidence 是否已赋值
                     * 
                     */
                    bool ConfidenceHasBeenSet() const;

                    /**
                     * 获取文件类型，文件hash
（md5,sha1,sha256）,文件大小等等文件
基础信息
                     * @return FileInfo 文件类型，文件hash
（md5,sha1,sha256）,文件大小等等文件
基础信息
                     * 
                     */
                    std::vector<FileInfoType> GetFileInfo() const;

                    /**
                     * 判断参数 FileInfo 是否已赋值
                     * @return FileInfo 是否已赋值
                     * 
                     */
                    bool FileInfoHasBeenSet() const;

                    /**
                     * 获取恶意标签，对应的团伙，家族等信息。
                     * @return Tags 恶意标签，对应的团伙，家族等信息。
                     * 
                     */
                    std::vector<TagType> GetTags() const;

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取对应的历史上的威胁情报事件
                     * @return Intelligences 对应的历史上的威胁情报事件
                     * 
                     */
                    std::vector<IntelligenceType> GetIntelligences() const;

                    /**
                     * 判断参数 Intelligences 是否已赋值
                     * @return Intelligences 是否已赋值
                     * 
                     */
                    bool IntelligencesHasBeenSet() const;

                    /**
                     * 获取情报相关的上下文
                     * @return Context 情报相关的上下文
                     * 
                     */
                    std::string GetContext() const;

                    /**
                     * 判断参数 Context 是否已赋值
                     * @return Context 是否已赋值
                     * 
                     */
                    bool ContextHasBeenSet() const;

                private:

                    /**
                     * 是否有数据，0代表有数据，1代表没有数据
                     */
                    uint64_t m_returnCode;
                    bool m_returnCodeHasBeenSet;

                    /**
                     * 判定结果，如：black、white、grey
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 置信度，取值0-100
                     */
                    uint64_t m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * 文件类型，文件hash
（md5,sha1,sha256）,文件大小等等文件
基础信息
                     */
                    std::vector<FileInfoType> m_fileInfo;
                    bool m_fileInfoHasBeenSet;

                    /**
                     * 恶意标签，对应的团伙，家族等信息。
                     */
                    std::vector<TagType> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 对应的历史上的威胁情报事件
                     */
                    std::vector<IntelligenceType> m_intelligences;
                    bool m_intelligencesHasBeenSet;

                    /**
                     * 情报相关的上下文
                     */
                    std::string m_context;
                    bool m_contextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TICS_V20181115_MODEL_DESCRIBEFILEINFORESPONSE_H_
