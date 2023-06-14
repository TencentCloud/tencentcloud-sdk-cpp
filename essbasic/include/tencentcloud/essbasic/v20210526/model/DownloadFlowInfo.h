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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_DOWNLOADFLOWINFO_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_DOWNLOADFLOWINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * 签署流程下载信息
                */
                class DownloadFlowInfo : public AbstractModel
                {
                public:
                    DownloadFlowInfo();
                    ~DownloadFlowInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取文件夹名称
                     * @return FileName 文件夹名称
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置文件夹名称
                     * @param _fileName 文件夹名称
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
                     * 获取签署流程的标识数组
                     * @return FlowIdList 签署流程的标识数组
                     * 
                     */
                    std::vector<std::string> GetFlowIdList() const;

                    /**
                     * 设置签署流程的标识数组
                     * @param _flowIdList 签署流程的标识数组
                     * 
                     */
                    void SetFlowIdList(const std::vector<std::string>& _flowIdList);

                    /**
                     * 判断参数 FlowIdList 是否已赋值
                     * @return FlowIdList 是否已赋值
                     * 
                     */
                    bool FlowIdListHasBeenSet() const;

                private:

                    /**
                     * 文件夹名称
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 签署流程的标识数组
                     */
                    std::vector<std::string> m_flowIdList;
                    bool m_flowIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_DOWNLOADFLOWINFO_H_
