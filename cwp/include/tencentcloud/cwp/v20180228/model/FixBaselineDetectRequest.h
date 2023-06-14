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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_FIXBASELINEDETECTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_FIXBASELINEDETECTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * FixBaselineDetect请求参数结构体
                */
                class FixBaselineDetectRequest : public AbstractModel
                {
                public:
                    FixBaselineDetectRequest();
                    ~FixBaselineDetectRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取主机Id
                     * @return HostId 主机Id
                     * 
                     */
                    std::string GetHostId() const;

                    /**
                     * 设置主机Id
                     * @param _hostId 主机Id
                     * 
                     */
                    void SetHostId(const std::string& _hostId);

                    /**
                     * 判断参数 HostId 是否已赋值
                     * @return HostId 是否已赋值
                     * 
                     */
                    bool HostIdHasBeenSet() const;

                    /**
                     * 获取项Id
                     * @return ItemId 项Id
                     * 
                     */
                    int64_t GetItemId() const;

                    /**
                     * 设置项Id
                     * @param _itemId 项Id
                     * 
                     */
                    void SetItemId(const int64_t& _itemId);

                    /**
                     * 判断参数 ItemId 是否已赋值
                     * @return ItemId 是否已赋值
                     * 
                     */
                    bool ItemIdHasBeenSet() const;

                    /**
                     * 获取修复内容
                     * @return Data 修复内容
                     * 
                     */
                    std::vector<std::string> GetData() const;

                    /**
                     * 设置修复内容
                     * @param _data 修复内容
                     * 
                     */
                    void SetData(const std::vector<std::string>& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * 主机Id
                     */
                    std::string m_hostId;
                    bool m_hostIdHasBeenSet;

                    /**
                     * 项Id
                     */
                    int64_t m_itemId;
                    bool m_itemIdHasBeenSet;

                    /**
                     * 修复内容
                     */
                    std::vector<std::string> m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_FIXBASELINEDETECTREQUEST_H_
