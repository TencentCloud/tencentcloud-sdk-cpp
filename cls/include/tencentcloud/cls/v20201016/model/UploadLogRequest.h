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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_UPLOADLOGREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_UPLOADLOGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * UploadLog请求参数结构体
                */
                class UploadLogRequest : public AbstractModel
                {
                public:
                    UploadLogRequest();
                    ~UploadLogRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取主题id
                     * @return TopicId 主题id
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置主题id
                     * @param _topicId 主题id
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取该参数已废弃，请勿使用
                     * @return HashKey 该参数已废弃，请勿使用
                     * @deprecated
                     */
                    std::string GetHashKey() const;

                    /**
                     * 设置该参数已废弃，请勿使用
                     * @param _hashKey 该参数已废弃，请勿使用
                     * @deprecated
                     */
                    void SetHashKey(const std::string& _hashKey);

                    /**
                     * 判断参数 HashKey 是否已赋值
                     * @return HashKey 是否已赋值
                     * @deprecated
                     */
                    bool HashKeyHasBeenSet() const;

                    /**
                     * 获取压缩方法
                     * @return CompressType 压缩方法
                     * 
                     */
                    std::string GetCompressType() const;

                    /**
                     * 设置压缩方法
                     * @param _compressType 压缩方法
                     * 
                     */
                    void SetCompressType(const std::string& _compressType);

                    /**
                     * 判断参数 CompressType 是否已赋值
                     * @return CompressType 是否已赋值
                     * 
                     */
                    bool CompressTypeHasBeenSet() const;

                private:

                    /**
                     * 主题id
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * 该参数已废弃，请勿使用
                     */
                    std::string m_hashKey;
                    bool m_hashKeyHasBeenSet;

                    /**
                     * 压缩方法
                     */
                    std::string m_compressType;
                    bool m_compressTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_UPLOADLOGREQUEST_H_
