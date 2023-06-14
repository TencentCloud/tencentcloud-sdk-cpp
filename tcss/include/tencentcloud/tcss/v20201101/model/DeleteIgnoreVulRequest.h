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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DELETEIGNOREVULREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DELETEIGNOREVULREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/ModifyIgnoreVul.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DeleteIgnoreVul请求参数结构体
                */
                class DeleteIgnoreVulRequest : public AbstractModel
                {
                public:
                    DeleteIgnoreVulRequest();
                    ~DeleteIgnoreVulRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取漏洞PocID 信息列表
                     * @return List 漏洞PocID 信息列表
                     * 
                     */
                    std::vector<ModifyIgnoreVul> GetList() const;

                    /**
                     * 设置漏洞PocID 信息列表
                     * @param _list 漏洞PocID 信息列表
                     * 
                     */
                    void SetList(const std::vector<ModifyIgnoreVul>& _list);

                    /**
                     * 判断参数 List 是否已赋值
                     * @return List 是否已赋值
                     * 
                     */
                    bool ListHasBeenSet() const;

                private:

                    /**
                     * 漏洞PocID 信息列表
                     */
                    std::vector<ModifyIgnoreVul> m_list;
                    bool m_listHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DELETEIGNOREVULREQUEST_H_
