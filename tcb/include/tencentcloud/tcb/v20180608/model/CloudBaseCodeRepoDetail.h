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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_CLOUDBASECODEREPODETAIL_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_CLOUDBASECODEREPODETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/CloudBaseCodeRepoName.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 代码仓库里 Repo的信息描述
                */
                class CloudBaseCodeRepoDetail : public AbstractModel
                {
                public:
                    CloudBaseCodeRepoDetail();
                    ~CloudBaseCodeRepoDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取repo的名字
                     * @return Name repo的名字
                     * 
                     */
                    CloudBaseCodeRepoName GetName() const;

                    /**
                     * 设置repo的名字
                     * @param _name repo的名字
                     * 
                     */
                    void SetName(const CloudBaseCodeRepoName& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取repo的url
                     * @return Url repo的url
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置repo的url
                     * @param _url repo的url
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                private:

                    /**
                     * repo的名字
                     */
                    CloudBaseCodeRepoName m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * repo的url
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_CLOUDBASECODEREPODETAIL_H_
