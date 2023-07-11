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

#ifndef TENCENTCLOUD_CMS_V20190321_MODEL_DELETELIBSAMPLESREQUEST_H_
#define TENCENTCLOUD_CMS_V20190321_MODEL_DELETELIBSAMPLESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cms
    {
        namespace V20190321
        {
            namespace Model
            {
                /**
                * DeleteLibSamples请求参数结构体
                */
                class DeleteLibSamplesRequest : public AbstractModel
                {
                public:
                    DeleteLibSamplesRequest();
                    ~DeleteLibSamplesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取关键词ID列表
                     * @return SampleIDs 关键词ID列表
                     * 
                     */
                    std::vector<std::string> GetSampleIDs() const;

                    /**
                     * 设置关键词ID列表
                     * @param _sampleIDs 关键词ID列表
                     * 
                     */
                    void SetSampleIDs(const std::vector<std::string>& _sampleIDs);

                    /**
                     * 判断参数 SampleIDs 是否已赋值
                     * @return SampleIDs 是否已赋值
                     * 
                     */
                    bool SampleIDsHasBeenSet() const;

                    /**
                     * 获取词库ID
                     * @return LibID 词库ID
                     * 
                     */
                    std::string GetLibID() const;

                    /**
                     * 设置词库ID
                     * @param _libID 词库ID
                     * 
                     */
                    void SetLibID(const std::string& _libID);

                    /**
                     * 判断参数 LibID 是否已赋值
                     * @return LibID 是否已赋值
                     * 
                     */
                    bool LibIDHasBeenSet() const;

                    /**
                     * 获取关键词内容列表
                     * @return SampleContents 关键词内容列表
                     * 
                     */
                    std::vector<std::string> GetSampleContents() const;

                    /**
                     * 设置关键词内容列表
                     * @param _sampleContents 关键词内容列表
                     * 
                     */
                    void SetSampleContents(const std::vector<std::string>& _sampleContents);

                    /**
                     * 判断参数 SampleContents 是否已赋值
                     * @return SampleContents 是否已赋值
                     * 
                     */
                    bool SampleContentsHasBeenSet() const;

                private:

                    /**
                     * 关键词ID列表
                     */
                    std::vector<std::string> m_sampleIDs;
                    bool m_sampleIDsHasBeenSet;

                    /**
                     * 词库ID
                     */
                    std::string m_libID;
                    bool m_libIDHasBeenSet;

                    /**
                     * 关键词内容列表
                     */
                    std::vector<std::string> m_sampleContents;
                    bool m_sampleContentsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CMS_V20190321_MODEL_DELETELIBSAMPLESREQUEST_H_
