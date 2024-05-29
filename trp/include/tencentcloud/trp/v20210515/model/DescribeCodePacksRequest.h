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

#ifndef TENCENTCLOUD_TRP_V20210515_MODEL_DESCRIBECODEPACKSREQUEST_H_
#define TENCENTCLOUD_TRP_V20210515_MODEL_DESCRIBECODEPACKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trp
    {
        namespace V20210515
        {
            namespace Model
            {
                /**
                * DescribeCodePacks请求参数结构体
                */
                class DescribeCodePacksRequest : public AbstractModel
                {
                public:
                    DescribeCodePacksRequest();
                    ~DescribeCodePacksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取每页数量
                     * @return PageSize 每页数量
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置每页数量
                     * @param _pageSize 每页数量
                     * 
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取页数
                     * @return PageNumber 页数
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置页数
                     * @param _pageNumber 页数
                     * 
                     */
                    void SetPageNumber(const uint64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取查询关键字
                     * @return Keyword 查询关键字
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置查询关键字
                     * @param _keyword 查询关键字
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                    /**
                     * 获取企业ID
                     * @return CorpId 企业ID
                     * 
                     */
                    uint64_t GetCorpId() const;

                    /**
                     * 设置企业ID
                     * @param _corpId 企业ID
                     * 
                     */
                    void SetCorpId(const uint64_t& _corpId);

                    /**
                     * 判断参数 CorpId 是否已赋值
                     * @return CorpId 是否已赋值
                     * 
                     */
                    bool CorpIdHasBeenSet() const;

                    /**
                     * 获取是否有流水码 0:无 1:有
                     * @return SerialType 是否有流水码 0:无 1:有
                     * 
                     */
                    uint64_t GetSerialType() const;

                    /**
                     * 设置是否有流水码 0:无 1:有
                     * @param _serialType 是否有流水码 0:无 1:有
                     * 
                     */
                    void SetSerialType(const uint64_t& _serialType);

                    /**
                     * 判断参数 SerialType 是否已赋值
                     * @return SerialType 是否已赋值
                     * 
                     */
                    bool SerialTypeHasBeenSet() const;

                    /**
                     * 获取资源类型 batch:批次, order_in 入库, order_out: 出入
                     * @return ResType 资源类型 batch:批次, order_in 入库, order_out: 出入
                     * 
                     */
                    std::string GetResType() const;

                    /**
                     * 设置资源类型 batch:批次, order_in 入库, order_out: 出入
                     * @param _resType 资源类型 batch:批次, order_in 入库, order_out: 出入
                     * 
                     */
                    void SetResType(const std::string& _resType);

                    /**
                     * 判断参数 ResType 是否已赋值
                     * @return ResType 是否已赋值
                     * 
                     */
                    bool ResTypeHasBeenSet() const;

                    /**
                     * 获取资源ID ResType是 batch 时对应是批次ID, 是 order_in, order_out时，则是订单ID
                     * @return ResId 资源ID ResType是 batch 时对应是批次ID, 是 order_in, order_out时，则是订单ID
                     * 
                     */
                    std::string GetResId() const;

                    /**
                     * 设置资源ID ResType是 batch 时对应是批次ID, 是 order_in, order_out时，则是订单ID
                     * @param _resId 资源ID ResType是 batch 时对应是批次ID, 是 order_in, order_out时，则是订单ID
                     * 
                     */
                    void SetResId(const std::string& _resId);

                    /**
                     * 判断参数 ResId 是否已赋值
                     * @return ResId 是否已赋值
                     * 
                     */
                    bool ResIdHasBeenSet() const;

                    /**
                     * 获取应用场景
                     * @return SceneCode 应用场景
                     * 
                     */
                    int64_t GetSceneCode() const;

                    /**
                     * 设置应用场景
                     * @param _sceneCode 应用场景
                     * 
                     */
                    void SetSceneCode(const int64_t& _sceneCode);

                    /**
                     * 判断参数 SceneCode 是否已赋值
                     * @return SceneCode 是否已赋值
                     * 
                     */
                    bool SceneCodeHasBeenSet() const;

                    /**
                     * 获取码包状态
                     * @return Status 码包状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置码包状态
                     * @param _status 码包状态
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 每页数量
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 页数
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 查询关键字
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * 企业ID
                     */
                    uint64_t m_corpId;
                    bool m_corpIdHasBeenSet;

                    /**
                     * 是否有流水码 0:无 1:有
                     */
                    uint64_t m_serialType;
                    bool m_serialTypeHasBeenSet;

                    /**
                     * 资源类型 batch:批次, order_in 入库, order_out: 出入
                     */
                    std::string m_resType;
                    bool m_resTypeHasBeenSet;

                    /**
                     * 资源ID ResType是 batch 时对应是批次ID, 是 order_in, order_out时，则是订单ID
                     */
                    std::string m_resId;
                    bool m_resIdHasBeenSet;

                    /**
                     * 应用场景
                     */
                    int64_t m_sceneCode;
                    bool m_sceneCodeHasBeenSet;

                    /**
                     * 码包状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRP_V20210515_MODEL_DESCRIBECODEPACKSREQUEST_H_
