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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DISASSOCIATECUSTOMIZEDCONFIGREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DISASSOCIATECUSTOMIZEDCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/BindItem.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * DisassociateCustomizedConfig请求参数结构体
                */
                class DisassociateCustomizedConfigRequest : public AbstractModel
                {
                public:
                    DisassociateCustomizedConfigRequest();
                    ~DisassociateCustomizedConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取配置ID
                     * @return UconfigId 配置ID
                     * 
                     */
                    std::string GetUconfigId() const;

                    /**
                     * 设置配置ID
                     * @param _uconfigId 配置ID
                     * 
                     */
                    void SetUconfigId(const std::string& _uconfigId);

                    /**
                     * 判断参数 UconfigId 是否已赋值
                     * @return UconfigId 是否已赋值
                     * 
                     */
                    bool UconfigIdHasBeenSet() const;

                    /**
                     * 获取解绑的列表
                     * @return BindList 解绑的列表
                     * 
                     */
                    std::vector<BindItem> GetBindList() const;

                    /**
                     * 设置解绑的列表
                     * @param _bindList 解绑的列表
                     * 
                     */
                    void SetBindList(const std::vector<BindItem>& _bindList);

                    /**
                     * 判断参数 BindList 是否已赋值
                     * @return BindList 是否已赋值
                     * 
                     */
                    bool BindListHasBeenSet() const;

                private:

                    /**
                     * 配置ID
                     */
                    std::string m_uconfigId;
                    bool m_uconfigIdHasBeenSet;

                    /**
                     * 解绑的列表
                     */
                    std::vector<BindItem> m_bindList;
                    bool m_bindListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DISASSOCIATECUSTOMIZEDCONFIGREQUEST_H_
