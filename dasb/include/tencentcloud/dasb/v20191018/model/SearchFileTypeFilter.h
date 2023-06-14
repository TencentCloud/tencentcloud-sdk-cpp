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

#ifndef TENCENTCLOUD_DASB_V20191018_MODEL_SEARCHFILETYPEFILTER_H_
#define TENCENTCLOUD_DASB_V20191018_MODEL_SEARCHFILETYPEFILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dasb
    {
        namespace V20191018
        {
            namespace Model
            {
                /**
                * 用于搜索文件传输记录等日志时按照protocol和method进行过滤
                */
                class SearchFileTypeFilter : public AbstractModel
                {
                public:
                    SearchFileTypeFilter();
                    ~SearchFileTypeFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取需要查询的文件传输类型，如SFTP/CLIP/RDP/RZSZ
                     * @return Protocol 需要查询的文件传输类型，如SFTP/CLIP/RDP/RZSZ
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置需要查询的文件传输类型，如SFTP/CLIP/RDP/RZSZ
                     * @param _protocol 需要查询的文件传输类型，如SFTP/CLIP/RDP/RZSZ
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取在当前指定的protocol下进一步过滤具体操作类型,如剪贴板文件上传，剪贴板文件下载等
                     * @return Method 在当前指定的protocol下进一步过滤具体操作类型,如剪贴板文件上传，剪贴板文件下载等
                     * 
                     */
                    std::vector<int64_t> GetMethod() const;

                    /**
                     * 设置在当前指定的protocol下进一步过滤具体操作类型,如剪贴板文件上传，剪贴板文件下载等
                     * @param _method 在当前指定的protocol下进一步过滤具体操作类型,如剪贴板文件上传，剪贴板文件下载等
                     * 
                     */
                    void SetMethod(const std::vector<int64_t>& _method);

                    /**
                     * 判断参数 Method 是否已赋值
                     * @return Method 是否已赋值
                     * 
                     */
                    bool MethodHasBeenSet() const;

                private:

                    /**
                     * 需要查询的文件传输类型，如SFTP/CLIP/RDP/RZSZ
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 在当前指定的protocol下进一步过滤具体操作类型,如剪贴板文件上传，剪贴板文件下载等
                     */
                    std::vector<int64_t> m_method;
                    bool m_methodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DASB_V20191018_MODEL_SEARCHFILETYPEFILTER_H_
