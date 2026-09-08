/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_PRODUCTINGESTTASKITEM_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_PRODUCTINGESTTASKITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * 数据接入列表行
                */
                class ProductIngestTaskItem : public AbstractModel
                {
                public:
                    ProductIngestTaskItem();
                    ~ProductIngestTaskItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>接入任务id</p>
                     * @return TaskId <p>接入任务id</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>接入任务id</p>
                     * @param _taskId <p>接入任务id</p>
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取<p>接入任务名称</p>
                     * @return Name <p>接入任务名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>接入任务名称</p>
                     * @param _name <p>接入任务名称</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>产品分组</p>
                     * @return Product <p>产品分组</p>
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置<p>产品分组</p>
                     * @param _product <p>产品分组</p>
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                    /**
                     * 获取<p>状态</p><p>枚举值：</p><ul><li>0： 接入中</li><li>1： 已接入</li><li>2： 接入失败</li><li>3： 删除中</li><li>4： 已删除</li><li>5： 删除失败</li></ul>
                     * @return Status <p>状态</p><p>枚举值：</p><ul><li>0： 接入中</li><li>1： 已接入</li><li>2： 接入失败</li><li>3： 删除中</li><li>4： 已删除</li><li>5： 删除失败</li></ul>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>状态</p><p>枚举值：</p><ul><li>0： 接入中</li><li>1： 已接入</li><li>2： 接入失败</li><li>3： 删除中</li><li>4： 已删除</li><li>5： 删除失败</li></ul>
                     * @param _status <p>状态</p><p>枚举值：</p><ul><li>0： 接入中</li><li>1： 已接入</li><li>2： 接入失败</li><li>3： 删除中</li><li>4： 已删除</li><li>5： 删除失败</li></ul>
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>接入任务创建时间</p><p>单位：ms</p>
                     * @return CreateTime <p>接入任务创建时间</p><p>单位：ms</p>
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置<p>接入任务创建时间</p><p>单位：ms</p>
                     * @param _createTime <p>接入任务创建时间</p><p>单位：ms</p>
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>接入任务修改时间</p><p>单位：ms</p>
                     * @return UpdateTime <p>接入任务修改时间</p><p>单位：ms</p>
                     * 
                     */
                    uint64_t GetUpdateTime() const;

                    /**
                     * 设置<p>接入任务修改时间</p><p>单位：ms</p>
                     * @param _updateTime <p>接入任务修改时间</p><p>单位：ms</p>
                     * 
                     */
                    void SetUpdateTime(const uint64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * <p>接入任务id</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>接入任务名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>产品分组</p>
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * <p>状态</p><p>枚举值：</p><ul><li>0： 接入中</li><li>1： 已接入</li><li>2： 接入失败</li><li>3： 删除中</li><li>4： 已删除</li><li>5： 删除失败</li></ul>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>接入任务创建时间</p><p>单位：ms</p>
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>接入任务修改时间</p><p>单位：ms</p>
                     */
                    uint64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_PRODUCTINGESTTASKITEM_H_
