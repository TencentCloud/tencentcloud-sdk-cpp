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

#ifndef TENCENTCLOUD_ESSBASIC_V20201222_MODEL_FILEURL_H_
#define TENCENTCLOUD_ESSBASIC_V20201222_MODEL_FILEURL_H_

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
        namespace V20201222
        {
            namespace Model
            {
                /**
                * 此结构体 (FileUrl) 用于描述下载文件的URL信息。
                */
                class FileUrl : public AbstractModel
                {
                public:
                    FileUrl();
                    ~FileUrl() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取下载文件的URL
                     * @return Url 下载文件的URL
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置下载文件的URL
                     * @param _url 下载文件的URL
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取下载文件的附加信息
                     * @return Option 下载文件的附加信息
                     * 
                     */
                    std::string GetOption() const;

                    /**
                     * 设置下载文件的附加信息
                     * @param _option 下载文件的附加信息
                     * 
                     */
                    void SetOption(const std::string& _option);

                    /**
                     * 判断参数 Option 是否已赋值
                     * @return Option 是否已赋值
                     * 
                     */
                    bool OptionHasBeenSet() const;

                    /**
                     * 获取下载文件所属的资源序号
                     * @return Index 下载文件所属的资源序号
                     * 
                     */
                    int64_t GetIndex() const;

                    /**
                     * 设置下载文件所属的资源序号
                     * @param _index 下载文件所属的资源序号
                     * 
                     */
                    void SetIndex(const int64_t& _index);

                    /**
                     * 判断参数 Index 是否已赋值
                     * @return Index 是否已赋值
                     * 
                     */
                    bool IndexHasBeenSet() const;

                    /**
                     * 获取目录业务下，文件对应的流程
                     * @return FlowId 目录业务下，文件对应的流程
                     * 
                     */
                    std::string GetFlowId() const;

                    /**
                     * 设置目录业务下，文件对应的流程
                     * @param _flowId 目录业务下，文件对应的流程
                     * 
                     */
                    void SetFlowId(const std::string& _flowId);

                    /**
                     * 判断参数 FlowId 是否已赋值
                     * @return FlowId 是否已赋值
                     * 
                     */
                    bool FlowIdHasBeenSet() const;

                private:

                    /**
                     * 下载文件的URL
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 下载文件的附加信息
                     */
                    std::string m_option;
                    bool m_optionHasBeenSet;

                    /**
                     * 下载文件所属的资源序号
                     */
                    int64_t m_index;
                    bool m_indexHasBeenSet;

                    /**
                     * 目录业务下，文件对应的流程
                     */
                    std::string m_flowId;
                    bool m_flowIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20201222_MODEL_FILEURL_H_
