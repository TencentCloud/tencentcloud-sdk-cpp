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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEFILEATTRIBUTESTASKOUTPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEFILEATTRIBUTESTASKOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 获取文件属性任务输出
                */
                class DescribeFileAttributesTaskOutput : public AbstractModel
                {
                public:
                    DescribeFileAttributesTaskOutput();
                    ~DescribeFileAttributesTaskOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取媒体文件的 Md5 值。
                     * @return Md5 媒体文件的 Md5 值。
                     * 
                     */
                    std::string GetMd5() const;

                    /**
                     * 设置媒体文件的 Md5 值。
                     * @param _md5 媒体文件的 Md5 值。
                     * 
                     */
                    void SetMd5(const std::string& _md5);

                    /**
                     * 判断参数 Md5 是否已赋值
                     * @return Md5 是否已赋值
                     * 
                     */
                    bool Md5HasBeenSet() const;

                    /**
                     * 获取媒体文件的 Sha1 值。
                     * @return Sha1 媒体文件的 Sha1 值。
                     * 
                     */
                    std::string GetSha1() const;

                    /**
                     * 设置媒体文件的 Sha1 值。
                     * @param _sha1 媒体文件的 Sha1 值。
                     * 
                     */
                    void SetSha1(const std::string& _sha1);

                    /**
                     * 判断参数 Sha1 是否已赋值
                     * @return Sha1 是否已赋值
                     * 
                     */
                    bool Sha1HasBeenSet() const;

                private:

                    /**
                     * 媒体文件的 Md5 值。
                     */
                    std::string m_md5;
                    bool m_md5HasBeenSet;

                    /**
                     * 媒体文件的 Sha1 值。
                     */
                    std::string m_sha1;
                    bool m_sha1HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEFILEATTRIBUTESTASKOUTPUT_H_
