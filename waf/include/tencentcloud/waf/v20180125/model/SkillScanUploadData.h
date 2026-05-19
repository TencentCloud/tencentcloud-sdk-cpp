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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_SKILLSCANUPLOADDATA_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_SKILLSCANUPLOADDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * skills 上检测接口返回信息
                */
                class SkillScanUploadData : public AbstractModel
                {
                public:
                    SkillScanUploadData();
                    ~SkillScanUploadData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>文件的 SHA256 Hash，用于轮询查询接口</p>
                     * @return ContentHash <p>文件的 SHA256 Hash，用于轮询查询接口</p>
                     * 
                     */
                    std::string GetContentHash() const;

                    /**
                     * 设置<p>文件的 SHA256 Hash，用于轮询查询接口</p>
                     * @param _contentHash <p>文件的 SHA256 Hash，用于轮询查询接口</p>
                     * 
                     */
                    void SetContentHash(const std::string& _contentHash);

                    /**
                     * 判断参数 ContentHash 是否已赋值
                     * @return ContentHash 是否已赋值
                     * 
                     */
                    bool ContentHashHasBeenSet() const;

                    /**
                     * 获取<p>固定为 scanning，表示任务已接收</p>
                     * @return Status <p>固定为 scanning，表示任务已接收</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>固定为 scanning，表示任务已接收</p>
                     * @param _status <p>固定为 scanning，表示任务已接收</p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>可读的操作结果描述</p>
                     * @return Message <p>可读的操作结果描述</p>
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置<p>可读的操作结果描述</p>
                     * @param _message <p>可读的操作结果描述</p>
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                private:

                    /**
                     * <p>文件的 SHA256 Hash，用于轮询查询接口</p>
                     */
                    std::string m_contentHash;
                    bool m_contentHashHasBeenSet;

                    /**
                     * <p>固定为 scanning，表示任务已接收</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>可读的操作结果描述</p>
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_SKILLSCANUPLOADDATA_H_
