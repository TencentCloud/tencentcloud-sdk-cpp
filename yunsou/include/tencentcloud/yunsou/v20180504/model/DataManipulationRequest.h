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

#ifndef TENCENTCLOUD_YUNSOU_V20180504_MODEL_DATAMANIPULATIONREQUEST_H_
#define TENCENTCLOUD_YUNSOU_V20180504_MODEL_DATAMANIPULATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Yunsou
    {
        namespace V20180504
        {
            namespace Model
            {
                /**
                * DataManipulation请求参数结构体
                */
                class DataManipulationRequest : public AbstractModel
                {
                public:
                    DataManipulationRequest();
                    ~DataManipulationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取操作类型，add或del
                     * @return OpType 操作类型，add或del
                     * 
                     */
                    std::string GetOpType() const;

                    /**
                     * 设置操作类型，add或del
                     * @param _opType 操作类型，add或del
                     * 
                     */
                    void SetOpType(const std::string& _opType);

                    /**
                     * 判断参数 OpType 是否已赋值
                     * @return OpType 是否已赋值
                     * 
                     */
                    bool OpTypeHasBeenSet() const;

                    /**
                     * 获取数据编码类型
                     * @return Encoding 数据编码类型
                     * 
                     */
                    std::string GetEncoding() const;

                    /**
                     * 设置数据编码类型
                     * @param _encoding 数据编码类型
                     * 
                     */
                    void SetEncoding(const std::string& _encoding);

                    /**
                     * 判断参数 Encoding 是否已赋值
                     * @return Encoding 是否已赋值
                     * 
                     */
                    bool EncodingHasBeenSet() const;

                    /**
                     * 获取数据
                     * @return Contents 数据
                     * 
                     */
                    std::string GetContents() const;

                    /**
                     * 设置数据
                     * @param _contents 数据
                     * 
                     */
                    void SetContents(const std::string& _contents);

                    /**
                     * 判断参数 Contents 是否已赋值
                     * @return Contents 是否已赋值
                     * 
                     */
                    bool ContentsHasBeenSet() const;

                    /**
                     * 获取应用Id
                     * @return ResourceId 应用Id
                     * 
                     */
                    uint64_t GetResourceId() const;

                    /**
                     * 设置应用Id
                     * @param _resourceId 应用Id
                     * 
                     */
                    void SetResourceId(const uint64_t& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                private:

                    /**
                     * 操作类型，add或del
                     */
                    std::string m_opType;
                    bool m_opTypeHasBeenSet;

                    /**
                     * 数据编码类型
                     */
                    std::string m_encoding;
                    bool m_encodingHasBeenSet;

                    /**
                     * 数据
                     */
                    std::string m_contents;
                    bool m_contentsHasBeenSet;

                    /**
                     * 应用Id
                     */
                    uint64_t m_resourceId;
                    bool m_resourceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNSOU_V20180504_MODEL_DATAMANIPULATIONREQUEST_H_
