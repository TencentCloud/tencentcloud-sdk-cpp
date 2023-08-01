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

#ifndef TENCENTCLOUD_MS_V20180408_MODEL_DESCRIBEENCRYPTINSTANCESREQUEST_H_
#define TENCENTCLOUD_MS_V20180408_MODEL_DESCRIBEENCRYPTINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ms
    {
        namespace V20180408
        {
            namespace Model
            {
                /**
                * DescribeEncryptInstances请求参数结构体
                */
                class DescribeEncryptInstancesRequest : public AbstractModel
                {
                public:
                    DescribeEncryptInstancesRequest();
                    ~DescribeEncryptInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取多记录查询时使用，页码
                     * @return PageNumber 多记录查询时使用，页码
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置多记录查询时使用，页码
                     * @param _pageNumber 多记录查询时使用，页码
                     * 
                     */
                    void SetPageNumber(const int64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取多记录每页展示数量
                     * @return PageSize 多记录每页展示数量
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置多记录每页展示数量
                     * @param _pageSize 多记录每页展示数量
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取多记录查询时排序使用  仅支持CreateTime 任务创建时间排序
                     * @return OrderField 多记录查询时排序使用  仅支持CreateTime 任务创建时间排序
                     * 
                     */
                    std::string GetOrderField() const;

                    /**
                     * 设置多记录查询时排序使用  仅支持CreateTime 任务创建时间排序
                     * @param _orderField 多记录查询时排序使用  仅支持CreateTime 任务创建时间排序
                     * 
                     */
                    void SetOrderField(const std::string& _orderField);

                    /**
                     * 判断参数 OrderField 是否已赋值
                     * @return OrderField 是否已赋值
                     * 
                     */
                    bool OrderFieldHasBeenSet() const;

                    /**
                     * 获取升序（asc）还是降序（desc），默认：desc。
                     * @return OrderDirection 升序（asc）还是降序（desc），默认：desc。
                     * 
                     */
                    std::string GetOrderDirection() const;

                    /**
                     * 设置升序（asc）还是降序（desc），默认：desc。
                     * @param _orderDirection 升序（asc）还是降序（desc），默认：desc。
                     * 
                     */
                    void SetOrderDirection(const std::string& _orderDirection);

                    /**
                     * 判断参数 OrderDirection 是否已赋值
                     * @return OrderDirection 是否已赋值
                     * 
                     */
                    bool OrderDirectionHasBeenSet() const;

                    /**
                     * 获取(条件过滤字段) 平台类型  1.android加固   2.ios源码混淆  3.sdk加固  4.applet小程序加固
                     * @return PlatformType (条件过滤字段) 平台类型  1.android加固   2.ios源码混淆  3.sdk加固  4.applet小程序加固
                     * 
                     */
                    int64_t GetPlatformType() const;

                    /**
                     * 设置(条件过滤字段) 平台类型  1.android加固   2.ios源码混淆  3.sdk加固  4.applet小程序加固
                     * @param _platformType (条件过滤字段) 平台类型  1.android加固   2.ios源码混淆  3.sdk加固  4.applet小程序加固
                     * 
                     */
                    void SetPlatformType(const int64_t& _platformType);

                    /**
                     * 判断参数 PlatformType 是否已赋值
                     * @return PlatformType 是否已赋值
                     * 
                     */
                    bool PlatformTypeHasBeenSet() const;

                    /**
                     * 获取(条件过滤字段) 订单采购类型 1-免费试用 2-按年收费 3-按次收费
                     * @return OrderType (条件过滤字段) 订单采购类型 1-免费试用 2-按年收费 3-按次收费
                     * 
                     */
                    int64_t GetOrderType() const;

                    /**
                     * 设置(条件过滤字段) 订单采购类型 1-免费试用 2-按年收费 3-按次收费
                     * @param _orderType (条件过滤字段) 订单采购类型 1-免费试用 2-按年收费 3-按次收费
                     * 
                     */
                    void SetOrderType(const int64_t& _orderType);

                    /**
                     * 判断参数 OrderType 是否已赋值
                     * @return OrderType 是否已赋值
                     * 
                     */
                    bool OrderTypeHasBeenSet() const;

                    /**
                     * 获取(条件过滤字段) 1-在线加固 或 2-输出工具加固
                     * @return EncryptOpType (条件过滤字段) 1-在线加固 或 2-输出工具加固
                     * 
                     */
                    int64_t GetEncryptOpType() const;

                    /**
                     * 设置(条件过滤字段) 1-在线加固 或 2-输出工具加固
                     * @param _encryptOpType (条件过滤字段) 1-在线加固 或 2-输出工具加固
                     * 
                     */
                    void SetEncryptOpType(const int64_t& _encryptOpType);

                    /**
                     * 判断参数 EncryptOpType 是否已赋值
                     * @return EncryptOpType 是否已赋值
                     * 
                     */
                    bool EncryptOpTypeHasBeenSet() const;

                    /**
                     * 获取(条件过滤字段) 单记录查询时使用，结果ID该字段非空时，结构会根据结果ID进行单记录查询，符合查询条件时，只返回一条记录。
                     * @return ResultId (条件过滤字段) 单记录查询时使用，结果ID该字段非空时，结构会根据结果ID进行单记录查询，符合查询条件时，只返回一条记录。
                     * 
                     */
                    std::string GetResultId() const;

                    /**
                     * 设置(条件过滤字段) 单记录查询时使用，结果ID该字段非空时，结构会根据结果ID进行单记录查询，符合查询条件时，只返回一条记录。
                     * @param _resultId (条件过滤字段) 单记录查询时使用，结果ID该字段非空时，结构会根据结果ID进行单记录查询，符合查询条件时，只返回一条记录。
                     * 
                     */
                    void SetResultId(const std::string& _resultId);

                    /**
                     * 判断参数 ResultId 是否已赋值
                     * @return ResultId 是否已赋值
                     * 
                     */
                    bool ResultIdHasBeenSet() const;

                    /**
                     * 获取(条件过滤字段) 查询与订单Id关联的任务
                     * @return OrderId (条件过滤字段) 查询与订单Id关联的任务
                     * 
                     */
                    std::string GetOrderId() const;

                    /**
                     * 设置(条件过滤字段) 查询与订单Id关联的任务
                     * @param _orderId (条件过滤字段) 查询与订单Id关联的任务
                     * 
                     */
                    void SetOrderId(const std::string& _orderId);

                    /**
                     * 判断参数 OrderId 是否已赋值
                     * @return OrderId 是否已赋值
                     * 
                     */
                    bool OrderIdHasBeenSet() const;

                    /**
                     * 获取(条件过滤字段) 查询与资源Id关联的任务
                     * @return ResourceId (条件过滤字段) 查询与资源Id关联的任务
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置(条件过滤字段) 查询与资源Id关联的任务
                     * @param _resourceId (条件过滤字段) 查询与资源Id关联的任务
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取(条件过滤字段) 应用类型：android-apk; android-aab;
                     * @return AppType (条件过滤字段) 应用类型：android-apk; android-aab;
                     * 
                     */
                    std::string GetAppType() const;

                    /**
                     * 设置(条件过滤字段) 应用类型：android-apk; android-aab;
                     * @param _appType (条件过滤字段) 应用类型：android-apk; android-aab;
                     * 
                     */
                    void SetAppType(const std::string& _appType);

                    /**
                     * 判断参数 AppType 是否已赋值
                     * @return AppType 是否已赋值
                     * 
                     */
                    bool AppTypeHasBeenSet() const;

                    /**
                     * 获取（条件过滤字段）应用的包名
                     * @return AppPkgName （条件过滤字段）应用的包名
                     * 
                     */
                    std::string GetAppPkgName() const;

                    /**
                     * 设置（条件过滤字段）应用的包名
                     * @param _appPkgName （条件过滤字段）应用的包名
                     * 
                     */
                    void SetAppPkgName(const std::string& _appPkgName);

                    /**
                     * 判断参数 AppPkgName 是否已赋值
                     * @return AppPkgName 是否已赋值
                     * 
                     */
                    bool AppPkgNameHasBeenSet() const;

                    /**
                     * 获取加固结果，
0：正在排队；
1：加固成功；
2：加固中；
3：加固失败；
5：重试；
多记录查询时，根据查询结果进行检索使用。
                     * @return EncryptState 加固结果，
0：正在排队；
1：加固成功；
2：加固中；
3：加固失败；
5：重试；
多记录查询时，根据查询结果进行检索使用。
                     * 
                     */
                    std::vector<int64_t> GetEncryptState() const;

                    /**
                     * 设置加固结果，
0：正在排队；
1：加固成功；
2：加固中；
3：加固失败；
5：重试；
多记录查询时，根据查询结果进行检索使用。
                     * @param _encryptState 加固结果，
0：正在排队；
1：加固成功；
2：加固中；
3：加固失败；
5：重试；
多记录查询时，根据查询结果进行检索使用。
                     * 
                     */
                    void SetEncryptState(const std::vector<int64_t>& _encryptState);

                    /**
                     * 判断参数 EncryptState 是否已赋值
                     * @return EncryptState 是否已赋值
                     * 
                     */
                    bool EncryptStateHasBeenSet() const;

                private:

                    /**
                     * 多记录查询时使用，页码
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 多记录每页展示数量
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 多记录查询时排序使用  仅支持CreateTime 任务创建时间排序
                     */
                    std::string m_orderField;
                    bool m_orderFieldHasBeenSet;

                    /**
                     * 升序（asc）还是降序（desc），默认：desc。
                     */
                    std::string m_orderDirection;
                    bool m_orderDirectionHasBeenSet;

                    /**
                     * (条件过滤字段) 平台类型  1.android加固   2.ios源码混淆  3.sdk加固  4.applet小程序加固
                     */
                    int64_t m_platformType;
                    bool m_platformTypeHasBeenSet;

                    /**
                     * (条件过滤字段) 订单采购类型 1-免费试用 2-按年收费 3-按次收费
                     */
                    int64_t m_orderType;
                    bool m_orderTypeHasBeenSet;

                    /**
                     * (条件过滤字段) 1-在线加固 或 2-输出工具加固
                     */
                    int64_t m_encryptOpType;
                    bool m_encryptOpTypeHasBeenSet;

                    /**
                     * (条件过滤字段) 单记录查询时使用，结果ID该字段非空时，结构会根据结果ID进行单记录查询，符合查询条件时，只返回一条记录。
                     */
                    std::string m_resultId;
                    bool m_resultIdHasBeenSet;

                    /**
                     * (条件过滤字段) 查询与订单Id关联的任务
                     */
                    std::string m_orderId;
                    bool m_orderIdHasBeenSet;

                    /**
                     * (条件过滤字段) 查询与资源Id关联的任务
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * (条件过滤字段) 应用类型：android-apk; android-aab;
                     */
                    std::string m_appType;
                    bool m_appTypeHasBeenSet;

                    /**
                     * （条件过滤字段）应用的包名
                     */
                    std::string m_appPkgName;
                    bool m_appPkgNameHasBeenSet;

                    /**
                     * 加固结果，
0：正在排队；
1：加固成功；
2：加固中；
3：加固失败；
5：重试；
多记录查询时，根据查询结果进行检索使用。
                     */
                    std::vector<int64_t> m_encryptState;
                    bool m_encryptStateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MS_V20180408_MODEL_DESCRIBEENCRYPTINSTANCESREQUEST_H_
