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

#ifndef TENCENTCLOUD_ZJ_V20190121_MODEL_MMSINSTANCEINFOLIST_H_
#define TENCENTCLOUD_ZJ_V20190121_MODEL_MMSINSTANCEINFOLIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/zj/v20190121/model/MmsInstanceInfo.h>


namespace TencentCloud
{
    namespace Zj
    {
        namespace V20190121
        {
            namespace Model
            {
                /**
                * 彩信实例状态列表
                */
                class MmsInstanceInfoList : public AbstractModel
                {
                public:
                    MmsInstanceInfoList();
                    ~MmsInstanceInfoList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取总数据量
                     * @return Total 总数据量
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 设置总数据量
                     * @param _total 总数据量
                     * 
                     */
                    void SetTotal(const int64_t& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取彩信实例状态信息列表
                     * @return List 彩信实例状态信息列表
                     * 
                     */
                    std::vector<MmsInstanceInfo> GetList() const;

                    /**
                     * 设置彩信实例状态信息列表
                     * @param _list 彩信实例状态信息列表
                     * 
                     */
                    void SetList(const std::vector<MmsInstanceInfo>& _list);

                    /**
                     * 判断参数 List 是否已赋值
                     * @return List 是否已赋值
                     * 
                     */
                    bool ListHasBeenSet() const;

                private:

                    /**
                     * 总数据量
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 彩信实例状态信息列表
                     */
                    std::vector<MmsInstanceInfo> m_list;
                    bool m_listHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ZJ_V20190121_MODEL_MMSINSTANCEINFOLIST_H_
