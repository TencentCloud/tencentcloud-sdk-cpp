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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBEVOICEPRINTREQUEST_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBEVOICEPRINTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * DescribeVoicePrint请求参数结构体
                */
                class DescribeVoicePrintRequest : public AbstractModel
                {
                public:
                    DescribeVoicePrintRequest();
                    ~DescribeVoicePrintRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取查询方式，0表示查询特定VoicePrintId，1表示分页查询
                     * @return DescribeMode 查询方式，0表示查询特定VoicePrintId，1表示分页查询
                     * 
                     */
                    uint64_t GetDescribeMode() const;

                    /**
                     * 设置查询方式，0表示查询特定VoicePrintId，1表示分页查询
                     * @param _describeMode 查询方式，0表示查询特定VoicePrintId，1表示分页查询
                     * 
                     */
                    void SetDescribeMode(const uint64_t& _describeMode);

                    /**
                     * 判断参数 DescribeMode 是否已赋值
                     * @return DescribeMode 是否已赋值
                     * 
                     */
                    bool DescribeModeHasBeenSet() const;

                    /**
                     * 获取声纹ID
                     * @return VoicePrintIdList 声纹ID
                     * 
                     */
                    std::vector<std::string> GetVoicePrintIdList() const;

                    /**
                     * 设置声纹ID
                     * @param _voicePrintIdList 声纹ID
                     * 
                     */
                    void SetVoicePrintIdList(const std::vector<std::string>& _voicePrintIdList);

                    /**
                     * 判断参数 VoicePrintIdList 是否已赋值
                     * @return VoicePrintIdList 是否已赋值
                     * 
                     */
                    bool VoicePrintIdListHasBeenSet() const;

                    /**
                     * 获取当前页码,从1开始,DescribeMode为1时填写
                     * @return PageIndex 当前页码,从1开始,DescribeMode为1时填写
                     * 
                     */
                    uint64_t GetPageIndex() const;

                    /**
                     * 设置当前页码,从1开始,DescribeMode为1时填写
                     * @param _pageIndex 当前页码,从1开始,DescribeMode为1时填写
                     * 
                     */
                    void SetPageIndex(const uint64_t& _pageIndex);

                    /**
                     * 判断参数 PageIndex 是否已赋值
                     * @return PageIndex 是否已赋值
                     * 
                     */
                    bool PageIndexHasBeenSet() const;

                    /**
                     * 获取每页条数 最少20,DescribeMode为1时填写
                     * @return PageSize 每页条数 最少20,DescribeMode为1时填写
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置每页条数 最少20,DescribeMode为1时填写
                     * @param _pageSize 每页条数 最少20,DescribeMode为1时填写
                     * 
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                private:

                    /**
                     * 查询方式，0表示查询特定VoicePrintId，1表示分页查询
                     */
                    uint64_t m_describeMode;
                    bool m_describeModeHasBeenSet;

                    /**
                     * 声纹ID
                     */
                    std::vector<std::string> m_voicePrintIdList;
                    bool m_voicePrintIdListHasBeenSet;

                    /**
                     * 当前页码,从1开始,DescribeMode为1时填写
                     */
                    uint64_t m_pageIndex;
                    bool m_pageIndexHasBeenSet;

                    /**
                     * 每页条数 最少20,DescribeMode为1时填写
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBEVOICEPRINTREQUEST_H_
