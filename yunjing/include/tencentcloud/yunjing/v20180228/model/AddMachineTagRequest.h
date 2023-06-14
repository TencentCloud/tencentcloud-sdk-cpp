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

#ifndef TENCENTCLOUD_YUNJING_V20180228_MODEL_ADDMACHINETAGREQUEST_H_
#define TENCENTCLOUD_YUNJING_V20180228_MODEL_ADDMACHINETAGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Yunjing
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * AddMachineTag请求参数结构体
                */
                class AddMachineTagRequest : public AbstractModel
                {
                public:
                    AddMachineTagRequest();
                    ~AddMachineTagRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取云服务器ID
                     * @return Quuid 云服务器ID
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置云服务器ID
                     * @param _quuid 云服务器ID
                     * 
                     */
                    void SetQuuid(const std::string& _quuid);

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     * 
                     */
                    bool QuuidHasBeenSet() const;

                    /**
                     * 获取标签ID
                     * @return TagId 标签ID
                     * 
                     */
                    uint64_t GetTagId() const;

                    /**
                     * 设置标签ID
                     * @param _tagId 标签ID
                     * 
                     */
                    void SetTagId(const uint64_t& _tagId);

                    /**
                     * 判断参数 TagId 是否已赋值
                     * @return TagId 是否已赋值
                     * 
                     */
                    bool TagIdHasBeenSet() const;

                    /**
                     * 获取云服务器地区
                     * @return MRegion 云服务器地区
                     * 
                     */
                    std::string GetMRegion() const;

                    /**
                     * 设置云服务器地区
                     * @param _mRegion 云服务器地区
                     * 
                     */
                    void SetMRegion(const std::string& _mRegion);

                    /**
                     * 判断参数 MRegion 是否已赋值
                     * @return MRegion 是否已赋值
                     * 
                     */
                    bool MRegionHasBeenSet() const;

                    /**
                     * 获取云服务器类型(CVM|BM)
                     * @return MArea 云服务器类型(CVM|BM)
                     * 
                     */
                    std::string GetMArea() const;

                    /**
                     * 设置云服务器类型(CVM|BM)
                     * @param _mArea 云服务器类型(CVM|BM)
                     * 
                     */
                    void SetMArea(const std::string& _mArea);

                    /**
                     * 判断参数 MArea 是否已赋值
                     * @return MArea 是否已赋值
                     * 
                     */
                    bool MAreaHasBeenSet() const;

                private:

                    /**
                     * 云服务器ID
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * 标签ID
                     */
                    uint64_t m_tagId;
                    bool m_tagIdHasBeenSet;

                    /**
                     * 云服务器地区
                     */
                    std::string m_mRegion;
                    bool m_mRegionHasBeenSet;

                    /**
                     * 云服务器类型(CVM|BM)
                     */
                    std::string m_mArea;
                    bool m_mAreaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNJING_V20180228_MODEL_ADDMACHINETAGREQUEST_H_
