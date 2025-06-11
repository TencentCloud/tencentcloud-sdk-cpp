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

#ifndef TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBESOFTWAREINFORMATIONPAGEDATA_H_
#define TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBESOFTWAREINFORMATIONPAGEDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ioa/v20220601/model/SoftwareInformationData.h>
#include <tencentcloud/ioa/v20220601/model/Paging.h>


namespace TencentCloud
{
    namespace Ioa
    {
        namespace V20220601
        {
            namespace Model
            {
                /**
                * 业务响应数据
                */
                class DescribeSoftwareInformationPageData : public AbstractModel
                {
                public:
                    DescribeSoftwareInformationPageData();
                    ~DescribeSoftwareInformationPageData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取软件详情响应对象集合
                     * @return Items 软件详情响应对象集合
                     * 
                     */
                    std::vector<SoftwareInformationData> GetItems() const;

                    /**
                     * 设置软件详情响应对象集合
                     * @param _items 软件详情响应对象集合
                     * 
                     */
                    void SetItems(const std::vector<SoftwareInformationData>& _items);

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                    /**
                     * 获取分页公共对象
                     * @return Page 分页公共对象
                     * 
                     */
                    Paging GetPage() const;

                    /**
                     * 设置分页公共对象
                     * @param _page 分页公共对象
                     * 
                     */
                    void SetPage(const Paging& _page);

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     * 
                     */
                    bool PageHasBeenSet() const;

                private:

                    /**
                     * 软件详情响应对象集合
                     */
                    std::vector<SoftwareInformationData> m_items;
                    bool m_itemsHasBeenSet;

                    /**
                     * 分页公共对象
                     */
                    Paging m_page;
                    bool m_pageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBESOFTWAREINFORMATIONPAGEDATA_H_
