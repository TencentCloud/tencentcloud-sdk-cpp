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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBLEREGIONCOUNTREQUEST_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBLEREGIONCOUNTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribleRegionCount请求参数结构体
                */
                class DescribleRegionCountRequest : public AbstractModel
                {
                public:
                    DescribleRegionCountRequest();
                    ~DescribleRegionCountRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取大禹子产品代号（bgpip表示高防IP；bgp表示独享包；bgp-multip表示共享包；）
                     * @return Business 大禹子产品代号（bgpip表示高防IP；bgp表示独享包；bgp-multip表示共享包；）
                     * 
                     */
                    std::string GetBusiness() const;

                    /**
                     * 设置大禹子产品代号（bgpip表示高防IP；bgp表示独享包；bgp-multip表示共享包；）
                     * @param _business 大禹子产品代号（bgpip表示高防IP；bgp表示独享包；bgp-multip表示共享包；）
                     * 
                     */
                    void SetBusiness(const std::string& _business);

                    /**
                     * 判断参数 Business 是否已赋值
                     * @return Business 是否已赋值
                     * 
                     */
                    bool BusinessHasBeenSet() const;

                    /**
                     * 获取根据线路统计，取值为[1（BGP线路），2（南京电信），3（南京联通），99（第三方合作线路）]；只对高防IP产品有效，其他产品此字段忽略
                     * @return LineList 根据线路统计，取值为[1（BGP线路），2（南京电信），3（南京联通），99（第三方合作线路）]；只对高防IP产品有效，其他产品此字段忽略
                     * 
                     */
                    std::vector<uint64_t> GetLineList() const;

                    /**
                     * 设置根据线路统计，取值为[1（BGP线路），2（南京电信），3（南京联通），99（第三方合作线路）]；只对高防IP产品有效，其他产品此字段忽略
                     * @param _lineList 根据线路统计，取值为[1（BGP线路），2（南京电信），3（南京联通），99（第三方合作线路）]；只对高防IP产品有效，其他产品此字段忽略
                     * 
                     */
                    void SetLineList(const std::vector<uint64_t>& _lineList);

                    /**
                     * 判断参数 LineList 是否已赋值
                     * @return LineList 是否已赋值
                     * 
                     */
                    bool LineListHasBeenSet() const;

                private:

                    /**
                     * 大禹子产品代号（bgpip表示高防IP；bgp表示独享包；bgp-multip表示共享包；）
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * 根据线路统计，取值为[1（BGP线路），2（南京电信），3（南京联通），99（第三方合作线路）]；只对高防IP产品有效，其他产品此字段忽略
                     */
                    std::vector<uint64_t> m_lineList;
                    bool m_lineListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBLEREGIONCOUNTREQUEST_H_
